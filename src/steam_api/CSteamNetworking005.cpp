#include "stdafx.h"

bool CSteamNetworking005::SendP2PPacket(CSteamID steamIDRemote, const void *pubData, uint32 cubData, EP2PSend eP2PSendType, int iVirtualPort)
{
	
	return true;
}

bool CSteamNetworking005::IsP2PPacketAvailable( uint32 *pcubMsgSize, int iVirtualPort )
{
	
	return false;
}

bool CSteamNetworking005::ReadP2PPacket( void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, CSteamID *psteamIDRemote, int iVirtualPort )
{
	
	return true;
}

bool CSteamNetworking005::AcceptP2PSessionWithUser( CSteamID steamIDRemote )
{
	
	return true;
}

bool CSteamNetworking005::CloseP2PSessionWithUser( CSteamID steamIDRemote )
{
	
	return true;
}

bool CSteamNetworking005::CloseP2PChannelWithUser( CSteamID steamIDRemote, int iVirtualPort )
{
	
	return true;
}

bool CSteamNetworking005::GetP2PSessionState( CSteamID steamIDRemote, P2PSessionState_t *pConnectionState )
{
	
	return true;
}

bool CSteamNetworking005::AllowP2PPacketRelay( bool bAllow )
{
	
	return true;
}

SNetListenSocket_t CSteamNetworking005::CreateListenSocket( int nVirtualP2PPort, uint32 nIP, uint16 nPort, bool bAllowUseOfPacketRelay )
{
	
	return 0;
}

SNetSocket_t CSteamNetworking005::CreateP2PConnectionSocket( CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec, bool bAllowUseOfPacketRelay )
{
	
	return 0;
}

SNetSocket_t CSteamNetworking005::CreateConnectionSocket( uint32 nIP, uint16 nPort, int nTimeoutSec )
{
	
	return 0;
}

bool CSteamNetworking005::DestroySocket( SNetSocket_t hSocket, bool bNotifyRemoteEnd )
{
	
	return true;
}

bool CSteamNetworking005::DestroyListenSocket( SNetListenSocket_t hSocket, bool bNotifyRemoteEnd )
{
	
	return true;
}

bool CSteamNetworking005::SendDataOnSocket( SNetSocket_t hSocket, void *pubData, uint32 cubData, bool bReliable )
{
	
	return true;
}

bool CSteamNetworking005::IsDataAvailableOnSocket( SNetSocket_t hSocket, uint32 *pcubMsgSize )
{
	
	return true;
}

bool CSteamNetworking005::RetrieveDataFromSocket( SNetSocket_t hSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize )
{
	
	return true;
}

bool CSteamNetworking005::IsDataAvailable( SNetListenSocket_t hListenSocket, uint32 *pcubMsgSize, SNetSocket_t *phSocket )
{
	
	return true;
}

bool CSteamNetworking005::RetrieveData( SNetListenSocket_t hListenSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, SNetSocket_t *phSocket )
{
	
	return true;
}

bool CSteamNetworking005::GetSocketInfo( SNetSocket_t hSocket, CSteamID *pSteamIDRemote, int *peSocketStatus, uint32 *punIPRemote, uint16 *punPortRemote )
{
	
	return true;
}

bool CSteamNetworking005::GetListenSocketInfo( SNetListenSocket_t hListenSocket, uint32 *pnIP, uint16 *pnPort )
{
	
	return true;
}

ESNetSocketConnectionType CSteamNetworking005::GetSocketConnectionType( SNetSocket_t hSocket )
{
	
	return k_ESNetSocketConnectionTypeUDP;
}

int CSteamNetworking005::GetMaxPacketSize(SNetSocket_t hSocket)
{
	
	return 0;
}