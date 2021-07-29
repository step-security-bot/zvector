/*
 *    Name: Vector_config
 * Purpose: Base configuration for the ZVector library
 *  Author: Paolo Fabio Zaino
 *  Domain: General
 * License: Copyright by Paolo Fabio Zaino, all right reserved
 *          Distributed under MIT license
 *          
 */

#ifndef SRC_ZVECTOR_CONFIG_H_
#define SRC_ZVECTOR_CONFIG_H_
#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

// Include some standard C lib header
#include <stdint.h>
#include <stdbool.h>

// Default vector Index type
// This is set to unsigned int of 32bit
// size (so all different architectures
// and OS behaves in a similar way)
// If you want a larger index you can
// change it to, for example, uint64_t
typedef uint32_t zvect_index;

// Default vector storage size
// This will be used when the user
// specifies 0 (zero) as data type
// size.
#define ZVECT_DEFAULT_DATA_SIZE sizeof(int)

// Default vector capacity
// This will be used when the user
// does NOT specify an Initial Capacity
// or set it to 0 (zero):
#define ZVECT_INITIAL_CAPACITY 4

// The following options are handled by Make
// So you should not need to modify them here.

// Enable/Disable thread safe code:
#define THREAD_SAFE 1

// Enable/Disable DMF Extensions:
#define ZVECT_DMF_EXTENSIONS 1

// Enable/Disable SFMD Extensions: 
#define ZVECT_SFMD_EXTENSIONS 1

#endif  // SRC_ZVECTOR_CONFIG_H_
