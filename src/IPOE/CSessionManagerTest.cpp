/***********************************************************************
	Copyright (c) 2017, The OpenBRAS project authors. All rights reserved.

	Redistribution and use in source and binary forms, with or without
	modification, are permitted provided that the following conditions are
	met:

	  * Redistributions of source code must retain the above copyright
		notice, this list of conditions and the following disclaimer.

	  * Redistributions in binary form must reproduce the above copyright
		notice, this list of conditions and the following disclaimer in
		the documentation and/or other materials provided with the
		distribution.

	  * Neither the name of OpenBRAS nor the names of its contributors may
		be used to endorse or promote products derived from this software
		without specific prior written permission.

	THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
	"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
	LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
	A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
	HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
	SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
	LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
	DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
	THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
	(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
	OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

**********************************************************************/

#include "CSessionManagerTest.h"

ISessionManager &ISessionManager::instance()
{
    static CSessionManager sessionmgr;
    return sessionmgr;
}

CSessionManager::CSessionManager()
    :m_psink(0)
{
}

CSessionManager::~CSessionManager()
{
}


int CSessionManager::openWithSink(ISessionManagerSink *pSink)
{
    ACE_DEBUG ((LM_DEBUG,"(%P|%t) CSessionManager::openWithSink\n"));

    m_psink = pSink;
    return 0;
}

int CSessionManager::Close()
{

    m_psink = NULL;
    return 0;
}


int CSessionManager::addUserRequest(const Session_User_Ex* sInfo)
{
	if (sInfo == NULL)
	{
		return -1;
	}
    ACE_DEBUG ((LM_DEBUG,"(%P|%t) CSessionManager::addUserRequest\n"));

    return 0;
}

int CSessionManager::deleteUserRequest(const Session_Offline* sInfo)
{
	if (sInfo == NULL)
	{
		return -1;
	}
    ACE_DEBUG ((LM_DEBUG,"(%P|%t) CSessionManager::deleteUserRequest\n"));

    return 0;
}

int CSessionManager::modifyUserRequest(const Session_User_Ex* sInfo)
{
	if (sInfo == NULL)
	{
		return -1;
	}
    ACE_DEBUG ((LM_DEBUG,"(%P|%t) CSessionManager::modifyUserRequest\n"));

    return 0;
}



