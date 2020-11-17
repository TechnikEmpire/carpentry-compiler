/* Copyright 2017-2018 PaGMO development team

This file is part of the PaGMO library.

The PaGMO library is free software; you can redistribute it and/or modify
it under the terms of either:

  * the GNU Lesser General Public License as published by the Free
    Software Foundation; either version 3 of the License, or (at your
    option) any later version.

or

  * the GNU General Public License as published by the Free Software
    Foundation; either version 3 of the License, or (at your option) any
    later version.

or both in parallel, as here.

The PaGMO library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received copies of the GNU General Public License and the
GNU Lesser General Public License along with the PaGMO library.  If not,
see https://www.gnu.org/licenses/. */

#ifndef PAGMO_CONFIG_HPP
#define PAGMO_CONFIG_HPP

// Start of defines instantiated by CMake.
// clang-format off
#define PAGMO_VERSION ""
#define PAGMO_VERSION_MAJOR 
#define PAGMO_VERSION_MINOR 



// NOTE: in order to enable the fork island, we have to:
// - verify in the build system that the required headers and the fork() function
//   are present (which will set the PAGMO_ENABLE_FORK_ISLAND variable), and
// - verify that the _POSIX_C_SOURCE definition is active during compilation.
#if defined(_POSIX_C_SOURCE)

#endif
// clang-format on
// End of defines instantiated by CMake.

// NOTE: some compilers are not able to deal with the large data
// arrays embedded in the CEC 2013/2014 problems. We thus implement
// here some heuristic to signal the capability of compiling
// these problems on the current platform.

#if !defined(_MSC_VER) && !defined(__APPLE__)

// MSVC and at least some versions of Clang on OSX have issues
// with the large data arrays in the CEC 2013/2014 problems.
// Let's disable them on these platforms. We can probably
// ameliorate and perhaps solve altogether the issues once
// we switch to a compiled-library setup for pagmo.
#define PAGMO_ENABLE_CEC2013
#define PAGMO_ENABLE_CEC2014

#endif

#endif