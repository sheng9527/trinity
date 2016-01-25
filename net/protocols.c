#include <sys/socket.h>
#include "config.h"
#include "net.h"

const struct protoptr net_protocols[PF_MAX] = {
	[PF_UNIX] = { .proto = &proto_unix },
	[PF_INET] = { .proto = &proto_ipv4 },
	[PF_AX25] = { .proto = &proto_ax25 },
	[PF_IPX] = { .proto = &proto_ipx },
#ifdef USE_APPLETALK
	[PF_APPLETALK] = { .proto = &proto_appletalk },
#endif
	[PF_X25] = { .proto = &proto_x25 },
#ifdef USE_IPV6
	[PF_INET6] = { .proto = &proto_inet6 },
#endif
	[PF_DECnet] = { .proto = &proto_decnet },
	[PF_PACKET] = { .proto = &proto_packet },
#ifdef USE_RDS
	[PF_RDS] = { .proto = &proto_rds },
#endif
	[PF_IRDA] = { .proto = &proto_irda },
	[PF_LLC] = { .proto = &proto_llc },
	[PF_CAN] = { .proto = &proto_can },
	[PF_TIPC] = { .proto = &proto_tipc },
	[PF_BLUETOOTH] = { .proto = &proto_bluetooth },
	[PF_PHONET] = { .proto = &proto_phonet },
#ifdef USE_CAIF
	[PF_CAIF] = { .proto = &proto_caif },
#endif
	[PF_NFC] = { .proto = &proto_nfc },
#ifdef USE_NETROM
	[PF_NETROM] = { .proto = &proto_netrom },
#endif
	[PF_NETLINK] = { .proto = &proto_netlink },
#ifdef USE_ROSE
	[PF_ROSE] = { .proto = &proto_rose },
#endif
	[PF_ATMPVC] = { .proto = &proto_atm },
	[PF_ATMSVC] = { .proto = &proto_atm },
	[PF_NETBEUI] = { .proto = &proto_netbeui },
	[PF_PPPOX] = { .proto = &proto_pppol2tp },
	[PF_IUCV] = { .proto = &proto_iucv },
	[PF_RXRPC] = { .proto = &proto_rxrpc },
	[PF_ALG] = { .proto = &proto_alg },
};