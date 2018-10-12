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
 *          File:  Rte.h
 *        Config:  0
 *     SW-C Type:  switchDetector
 *  Generated at:  Fri Oct 12 13:00:28 2018
 *
 *     Generator:  MICROSAR RTE ContractPhase Generator Version 3.13.5
 *                 RTE Core Version 1.18.0
 *       License:  
 *
 *   Description:  Header file containing RTE types (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */

#ifndef _RTE_H
# define _RTE_H

# define RTE_SW_MAJOR_VERSION (0x03U)
# define RTE_SW_MINOR_VERSION (0x0dU)
# define RTE_SW_PATCH_VERSION (0x05U)

# define RTE_VENDOR_ID (0x001EU)
# define RTE_MODULE_ID (0x0002U)

# define RTE_AR_RELEASE_MAJOR_VERSION     (0x04U)
# define RTE_AR_RELEASE_MINOR_VERSION     (0x02U)
# define RTE_AR_RELEASE_REVISION_VERSION  (0x02U)

# include "Std_Types.h"

# ifdef RTE_ENABLE_USER_DATATYPES
#  include "Rte_UserTypes.h"
# endif

# if !defined (TYPEDEF) && defined (AUTOMATIC)
#  define TYPEDEF AUTOMATIC
# endif

# if !defined (FUNC_P2CONST)
#  define FUNC_P2CONST(rettype, ptrclass, memclass) FUNC(P2CONST(rettype, AUTOMATIC, ptrclass), memclass)
# endif

/* Note: application errors are in the range between 1-63
         overlayed error (ORed with application errors) is 64
         structural errors are in the range between 128-256 */

/* common errors */
# define RTE_E_OK               (0U)
# define RTE_E_INVALID          (1U)

/* overlayed errors */
# define RTE_E_LOST_DATA        (64U)
# define RTE_E_MAX_AGE_EXCEEDED (64U)

# define Rte_HasOverlayedError(status) (((status) & 64U) != 0) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/* immediate infrastructure errors */
# define RTE_E_COM_STOPPED      (128U)
# define RTE_E_TIMEOUT          (129U)
# define RTE_E_LIMIT            (130U)
# define RTE_E_NO_DATA          (131U)
# define RTE_E_TRANSMIT_ACK     (132U)
# define RTE_E_NEVER_RECEIVED   (133U)
# define RTE_E_UNCONNECTED            (134U)
# define RTE_E_IN_EXCLUSIVE_AREA      (135U)
# define RTE_E_SEG_FAULT              (136U)
# define RTE_E_OUT_OF_RANGE           (137U)
# define RTE_E_SERIALIZATION_ERROR    (138U)
# define RTE_E_HARD_TRANSFORMER_ERROR (138U)
# define RTE_E_SERIALIZATION_LIMIT    (139U)
# define RTE_E_TRANSFORMER_LIMIT      (139U)
# define RTE_E_SOFT_TRANSFORMER_ERROR (140U)
# define RTE_E_COM_BUSY               (141U)

/* common SchM errors */
# define SCHM_E_OK                    (0U)
# define SCHM_E_TIMEOUT               (129U)
# define SCHM_E_LIMIT                 (130U)
# define SCHM_E_NO_DATA               (131U)
# define SCHM_E_TRANSMIT_ACK          (132U)
# define SCHM_E_IN_EXCLUSIVE_AREA     (135U)

# define Rte_IsInfrastructureError(status) (((status) & 128U) != 0) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# define Rte_ApplicationError(status) ((status) & 63U) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#endif /* _RTE_H */
