// Copyright 2008 Dolphin Emulator Project
// Licensed under GPLv2+
// Refer to the license.txt file included.

#include "Common/Version.h"

#include <string>

#include "Common/scmrev.h"

namespace Common
{
#ifdef _DEBUG
#define BUILD_TYPE_STR "Debug "
#elif defined DEBUGFAST
#define BUILD_TYPE_STR "DebugFast "
#else
#define BUILD_TYPE_STR ""
#endif

#define XP_VERSION "XP-3.0"
const std::string scm_rev_str = "Dolphin " XP_VERSION;
// #if !SCM_IS_MASTER
//                                 "[" SCM_BRANCH_STR "] "
// #endif

// #ifdef __INTEL_COMPILER
//     BUILD_TYPE_STR SCM_DESC_STR "-ICC";
// #else
//     BUILD_TYPE_STR SCM_DESC_STR;
// #endif

const std::string scm_rev_git_str = SCM_REV_STR;
const std::string scm_desc_str = SCM_DESC_STR;
const std::string scm_branch_str = SCM_BRANCH_STR;
const std::string scm_distributor_str = SCM_DISTRIBUTOR_STR;

#ifdef _WIN32
const std::string netplay_dolphin_ver = XP_VERSION " Win";
#elif __APPLE__SCM_DESC_STR
const std::string netplay_dolphin_ver = XP_VERSION " Mac";
#else
const std::string netplay_dolphin_ver = XP_VERSION " Lin";
#endif
}  // namespace Common
