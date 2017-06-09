#ifndef ACEINCLUDE_H
#define ACEINCLUDE_H
#include "ace/Asynch_Connector.h"
#include "ace/Asynch_Acceptor.h"
#include "ace/Asynch_IO.h"
#include "ace/Message_Block.h"
#include "ace/Null_Mutex.h"
#include "ace/Proactor.h"
#include "ace/Singleton.h"
#include "ace/Synch_Traits.h"
#include "ace/Task.h"
#include "ace/OS_NS_string.h"
#include "ace/OS_NS_sys_socket.h"
#include "ace/Asynch_Acceptor.h"
#include "ace/Asynch_Connector.h"
#include "ace/Asynch_IO.h"
#include "ace/CDR_Stream.h"
#include "ace/Get_Opt.h"
#include "ace/INET_Addr.h"
#include "ace/Message_Block.h"
#include "ace/Null_Condition.h"
#include "ace/Null_Mutex.h"
#include "ace/Proactor.h"
#include "ace/SOCK_Stream.h"
#include "ace/SOCK_CODgram.h"
#include "ace/SOCK_Dgram.h"
#include "ace/Service_Object.h"
#include "ace/Signal.h"
#include "ace/Singleton.h"
#include "ace/Task.h"
#include "ace/Thread_Manager.h"
#include "ace/Unbounded_Set.h"
#include "ace/os_include/os_netdb.h"
#include "ace/Thread_Semaphore.h"
#include "ace/Init_ACE.h"
#include "ace/MEM_Stream.h"
#include "ace/Svc_Handler.h"
#include "ace/OS_NS_stdio.h"
#include "ace/OS_NS_unistd.h"
#include "ace/Get_Opt.h"
#include "ace/MEM_Connector.h"
#include "ace/MEM_Acceptor.h"
#include "ace/Select_Reactor.h"
#include "ace/Svc_Handler.h"
#include "ace/Singleton.h"
#include "ace/Atomic_Op.h"
#if defined (WIN32)
#  include "ace/WIN32_Proactor.h"
#else
#  include "ace/POSIX_Proactor.h"
#endif

#include "ace/OS_NS_signal.h"
#include "ace/Reactor.h"
#include "ace/Dev_Poll_Reactor.h"

#include "ace/Acceptor.h"
#include "ace/Connector.h"

#include "ace/SOCK_Acceptor.h"
#include "ace/SOCK_Connector.h"

#include "ace/OS_NS_netdb.h"
#include "ace/streams.h"
#include "ace/OS_NS_sys_socket.h"
#include "ace/OS_NS_sys_uio.h"
#include "ace/os_include/netinet/os_tcp.h"

#include "ace/Log_Msg.h"
#include "ace/OS_NS_string.h"
#include "ace/INET_Addr.h"
#include "ace/Log_Msg.h"
#include "ace/OS_NS_arpa_inet.h"
#include "ace/SOCK_Dgram_Bcast.h"

#ifdef _MSC_VER
#if defined(ACEWRAPPER_EXPORTS)
#define ACEWarpper_Export  __declspec(dllexport)
#else 
#define ACEWarpper_Export  __declspec(dllimport)
#endif
  #ifndef _MT
    #error Error: please use multithread version of C runtime library.
  #endif // _MT
  #pragma warning(disable: 4996)
  #pragma warning(disable: 4200)
  #pragma warning(disable: 4786) // identifier was truncated to '255' characters in the browser information(mainly brought by stl)
  #pragma warning(disable: 4355) // disable 'this' used in base member initializer list
  #pragma warning(disable: 4275) // deriving exported class from non-exported
  #pragma warning(disable: 4251) // using non-exported as public in exported
#endif

#endif/*ACEInclude*/

