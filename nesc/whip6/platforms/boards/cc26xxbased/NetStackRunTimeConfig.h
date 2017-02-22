/*
 * whip6: Warsaw High-performance IPv6.
 *
 * Copyright (c) 2012-2016 InviNets Sp z o.o.
 * All rights reserved.
 *
 * This file is distributed under the terms in the attached LICENSE     
 * files. If you do not find these files, copies can be found by writing
 * to technology@invinets.com.
 */

#ifndef __WHIP6_CC2531_RUN_TIME_CONFIG_H__
#define __WHIP6_CC2531_RUN_TIME_CONFIG_H__

/** The default defragmentation timeout for a 6LoWPAN interface. */
#ifndef WHIP6_LOWPAN_DEFAULT_FRAGMENT_REASSEMBLY_TIMEOUT_IN_MILLIS
#define WHIP6_LOWPAN_DEFAULT_FRAGMENT_REASSEMBLY_TIMEOUT_IN_MILLIS 10000L
#endif /* WHIP6_LOWPAN_DEFAULT_FRAGMENT_REASSEMBLY_TIMEOUT_IN_MILLIS */

/** The default maximal number of retransmissions for a frame for a 6LoWPAN interface. */
#ifndef WHIP6_LOWPAN_DEFAULT_MAX_FRAME_RETRANSMISSION_ATTEMPTS
#define WHIP6_LOWPAN_DEFAULT_MAX_FRAME_RETRANSMISSION_ATTEMPTS 0
#endif /* WHIP6_LOWPAN_DEFAULT_MAX_FRAME_RETRANSMISSION_ATTEMPTS */

/** The default rollback after a transmission failure of a broadcast frame for a 6LoWPAN interface. */
#ifndef WHIP6_LOWPAN_DEFAULT_BROADCAST_FRAME_TX_FAILURE_ROLLBACK_IN_MILLIS
#define WHIP6_LOWPAN_DEFAULT_BROADCAST_FRAME_TX_FAILURE_ROLLBACK_IN_MILLIS 128UL
#endif /* WHIP6_LOWPAN_DEFAULT_BROADCAST_FRAME_TX_FAILURE_ROLLBACK_IN_MILLIS */

/** The default rollback after a transmission failure of a unicast frame for a 6LoWPAN interface. */
#ifndef WHIP6_LOWPAN_DEFAULT_UNICAST_FRAME_TX_FAILURE_ROLLBACK_IN_MILLIS
#define WHIP6_LOWPAN_DEFAULT_UNICAST_FRAME_TX_FAILURE_ROLLBACK_IN_MILLIS 64UL
#endif /* WHIP6_LOWPAN_DEFAULT_UNICAST_FRAME_TX_FAILURE_ROLLBACK_IN_MILLIS */

/** The default rollback after a transmission success of a broadcast frame for a 6LoWPAN interface. */
#ifndef WHIP6_LOWPAN_DEFAULT_BROADCAST_FRAME_TX_SUCCESS_ROLLBACK_IN_MILLIS
#define WHIP6_LOWPAN_DEFAULT_BROADCAST_FRAME_TX_SUCCESS_ROLLBACK_IN_MILLIS 0UL
#endif /* WHIP6_LOWPAN_DEFAULT_BROADCAST_FRAME_TX_SUCCESS_ROLLBACK_IN_MILLIS */

/** The default rollback after a transmission success of a unicast frame for a 6LoWPAN interface. */
#ifndef WHIP6_LOWPAN_DEFAULT_UNICAST_FRAME_TX_SUCCESS_ROLLBACK_IN_MILLIS
#define WHIP6_LOWPAN_DEFAULT_UNICAST_FRAME_TX_SUCCESS_ROLLBACK_IN_MILLIS 0UL
#endif /* WHIP6_LOWPAN_DEFAULT_UNICAST_FRAME_TX_SUCCESS_ROLLBACK_IN_MILLIS */

/** Default time to retry sending packet to router rather then the next static hop. */
#ifndef WHIP6_IPV6_ROUTING_SIMPLE_STRATEGY_RETRY_ROUTER_AFTER_MILLIS
#define WHIP6_IPV6_ROUTING_SIMPLE_STRATEGY_RETRY_ROUTER_AFTER_MILLIS (5UL * 60UL * 1000UL)
#endif /* WHIP6_IPV6_ROUTING_SIMPLE_STRATEGY_RETRY_ROUTER_AFTER_MILLIS */

#endif /* __WHIP6_CC2531_RUN_TIME_CONFIG_H__ */
