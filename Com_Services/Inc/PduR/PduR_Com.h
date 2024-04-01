//
// Created by itsmeayoub on 25/02/24.
//
#ifndef SECOC_MODULE_PDUR_COM_H
#define SECOC_MODULE_PDUR_COM_H
#include "ComStack_Types.h"

/**********************************************************************************************************************
                                                 FUNCTION PROTOTYPES
 *********************************************************************************************************************/
/****************************************************************************************************************
 * Service name : PduR_ComTransmit                                                                            *
 * Sws_Index : [SWS_PduR_00406]                                                                                 *
 * Service ID[hex]: 0x49                                                                                        *
 * Sync/Async: Synchronous                                                                                      *
 * Reentrancy: Reentrant for different PduIds, Non reentrant for the same PduId.                                *
 * Parameters (in): TxPduId    - Identifier of the Pdu to be transmitted                                        *
 *                  PduInfoPtr - Length of and pointer to the PDU data and pointer to MetaData.                 *
 * Parameters (inout): None                                                                                     *
 * Parameters (out): None                                                                                       *
 * Return value: Std_ReturnType - E_OF : Transmit request has been accepted.                                    *
 *                                E_NOT_OK : Transmit request has not been accepted.                            *
 * Description: This service requests transmission of a PDU.                                                    *
 ***************************************************************************************************************/
Std_ReturnType PduR_ComTransmit(PduIdType TxPduId, const PduInfoType* PduInfoPtr);
#endif //SECOC_MODULE_PDUR_COM_H
