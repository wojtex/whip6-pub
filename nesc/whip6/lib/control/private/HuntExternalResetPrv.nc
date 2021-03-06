/*
 * whip6: Warsaw High-performance IPv6.
 *
 * Copyright (c) 2012-2017 Szymon Acedanski
 * All rights reserved.
 *
 * This file is distributed under the terms in the attached LICENSE     
 * files.
 */


module HuntExternalResetPrv
{
    provides interface Init @exactlyonce();

    uses interface ResetReason;
    uses interface Timer<TMilli, uint32_t> @exactlyonce();
}
implementation {
    enum {
        PANIC_DELAY_MS = 3777,
    };

    event void Timer.fired() {
        panic("Unexpected external reset");
    }

    command error_t Init.init() {
        if (call ResetReason.getLastResetReason() == RESET_REASON_EXTERNAL) {
            call Timer.startWithTimeoutFromNow(PANIC_DELAY_MS);
        }
        return SUCCESS;
    }
}
