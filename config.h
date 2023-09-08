// Copyright 2023 Ben Wang (@DaPotato69)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define MASTER_RIGHT
#define FORCE_NKRO
#define MOUSEKEY_MAX_SPEED 6
#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN GP16   // USART TX pin
#define SERIAL_USART_RX_PIN GP17   // USART RX pin
#define SERIAL_USART_PIN_SWAP      // Swap TX and RX pins if keyboard is master halve. (Only available on some MCUs)