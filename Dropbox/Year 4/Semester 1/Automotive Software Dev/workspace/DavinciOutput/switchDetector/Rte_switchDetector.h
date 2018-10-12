/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                WARNING: The generated code is for demonstration purposes only and not tested for use in or for
 *                electronic controller units. Use in or for electronic controller units may lead to severe personal
 *                damages or damages to property. If you use the code in an electronic controller unit though, you do
 *                so entirely at your own risk. If you use the code in an electronic controller, you are obliged to
 *                indemnify and hold harmless Vector from all and any third party claims, especially if the claims are
 *                based on product liability.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_switchDetector.h
 *        Config:  0
 *     SW-C Type:  switchDetector
 *  Generated at:  Fri Oct 12 13:00:28 2018
 *
 *     Generator:  MICROSAR RTE ContractPhase Generator Version 3.13.5
 *                 RTE Core Version 1.18.0
 *       License:  
 *
 *   Description:  Application header file for SW-C <switchDetector> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_SWITCHDETECTOR_H
# define _RTE_SWITCHDETECTOR_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#  define RTE_PTR2ARRAYBASETYPE_PASSING
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_switchDetector_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_switchDetector
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_switchDetector, RTE_CONST, RTE_CONST) Rte_Inst_switchDetector; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_switchDetector, TYPEDEF, RTE_CONST) Rte_Instance;


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(boolean, RTE_CODE) Rte_DRead_switchDetector_DownSwitchInput_switchState(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_DRead_switchDetector_UpSwitchInput_switchState(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_switchDetector_motorDir_outputStatus(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_switchDetector_motorStatus_outputStatus(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_IrvRead_switchDetector_SwitchEventHandler_windowPosition(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_switchDetector_SwitchEventHandler_windowPosition(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_switchDetector_switchDetector_Init_windowPosition(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_DRead_DownSwitchInput_switchState Rte_DRead_switchDetector_DownSwitchInput_switchState
# define Rte_DRead_UpSwitchInput_switchState Rte_DRead_switchDetector_UpSwitchInput_switchState


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_motorDir_outputStatus Rte_Write_switchDetector_motorDir_outputStatus
# define Rte_Write_motorStatus_outputStatus Rte_Write_switchDetector_motorStatus_outputStatus


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_SwitchEventHandler_windowPosition() \
  Rte_IrvRead_switchDetector_SwitchEventHandler_windowPosition()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_SwitchEventHandler_windowPosition(data) \
  Rte_IrvWrite_switchDetector_SwitchEventHandler_windowPosition(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_switchDetector_Init_windowPosition(data) \
  Rte_IrvWrite_switchDetector_switchDetector_Init_windowPosition(data)
/* PRQA L:L1 */




# define switchDetector_START_SEC_CODE
# include "switchDetector_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: SwitchEventHandler
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on DataReceivedEvent for DataElementPrototype <switchState> of PortPrototype <DownSwitchInput>
 *   - triggered on DataReceivedEvent for DataElementPrototype <switchState> of PortPrototype <UpSwitchInput>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   boolean Rte_DRead_DownSwitchInput_switchState(void)
 *   boolean Rte_DRead_UpSwitchInput_switchState(void)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_motorDir_outputStatus(boolean data)
 *   Std_ReturnType Rte_Write_motorStatus_outputStatus(boolean data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   uint16 Rte_IrvRead_SwitchEventHandler_windowPosition(void)
 *
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_SwitchEventHandler_windowPosition(uint16 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SwitchEventHandler SwitchEventHandler
FUNC(void, switchDetector_CODE) SwitchEventHandler(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: switchDetector_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_motorDir_outputStatus(boolean data)
 *   Std_ReturnType Rte_Write_motorStatus_outputStatus(boolean data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_switchDetector_Init_windowPosition(uint16 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_switchDetector_Init switchDetector_Init
FUNC(void, switchDetector_CODE) switchDetector_Init(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define switchDetector_STOP_SEC_CODE
# include "switchDetector_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_SWITCHDETECTOR_H */
