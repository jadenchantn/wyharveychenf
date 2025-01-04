/*
 * Copyright (c) 2020-2021 Huawei Device Co., Ltd.
 *
 * HDF is dual licensed: you can use it either under the terms of
 * the GPL, or the BSD license, at your option.
 * See the LICENSE file in the root of this repository for complete details.
 */

#ifndef HCS_PARSER_TEST_H
#define HCS_PARSER_TEST_H

#include "hdf_main_test.h"

enum HdfConfigTestCaseCmd {
    HDF_CREATE_DM_HCS_TO_TREE_001,
    HDF_GET_NODE_BY_ATTR_VALUE_001,
    HDF_GET_NODE_BY_ATTR_VALUE_002,
    HDF_GET_BOOL_ATTR_VALUE_001,
    HDF_GET_BOOL_ATTR_VALUE_002,
    HDF_GET_UINT8_ATTR_VALUE_001,
    HDF_GET_UINT8_ATTR_VALUE_002,
    HDF_GET_UINT8_ARRAY_ELEM_ATTR_VALUE_001,
    HDF_GET_UINT8_ARRAY_ELEM_ATTR_VALUE_002,
    HDF_GET_UINT8_ARRAY_ATTR_VALUE_001,
    HDF_GET_UINT8_ARRAY_ATTR_VALUE_002,
    HDF_GET_UINT16_ATTR_VALUE_001,
    HDF_GET_UINT16_ATTR_VALUE_002,
    HDF_GET_UINT16_ARRAY_ELEM_ATTR_VALUE_001,
    HDF_GET_UINT16_ARRAY_ELEM_ATTR_VALUE_002,
    HDF_GET_UINT16_ARRAY_ATTR_VALUE_001,
    HDF_GET_UINT16_ARRAY_ATTR_VALUE_002,
    HDF_GET_UINT32_ATTR_VALUE_001,
    HDF_GET_UINT32_ATTR_VALUE_002,
    HDF_GET_UINT32_ARRAY_ELEM_ATTR_VALUE_001,
    HDF_GET_UINT32_ARRAY_ELEM_ATTR_VALUE_002,
    HDF_GET_UINT32_ARRAY_ATTR_VALUE_001,
    HDF_GET_UINT32_ARRAY_ATTR_VALUE_002,
    HDF_GET_UINT64_ATTR_VALUE_001,
    HDF_GET_UINT64_ATTR_VALUE_002,
    HDF_GET_UINT64_ARRAY_ELEM_ATTR_VALUE_001,
    HDF_GET_UINT64_ARRAY_ELEM_ATTR_VALUE_002,
    HDF_GET_UINT64_ARRAY_ATTR_VALUE_001,
    HDF_GET_UINT64_ARRAY_ATTR_VALUE_002,
    HDF_GET_ELEM_NUM_VALUE_001,
    HDF_GET_ELEM_NUM_VALUE_002,
    HDF_GET_CHILD_NODE_001,
    HDF_GET_CHILD_NODE_002,
    HDF_TRAVERSE_ATTR_IN_NODE_001,
    HDF_TRAVERSE_ATTR_IN_NODE_002,
    HDF_GET_STRING_ATTR_VALUE_001,
    HDF_GET_STRING_ATTR_VALUE_002,
    HDF_GET_STRING_ARRAY_ELEM_ATTR_VALUE_001,
    HDF_GET_STRING_ARRAY_ELEM_ATTR_VALUE_002,
    HDF_GET_NODE_BY_ATTR_REF_001,
    HDF_GET_NODE_BY_ATTR_REF_002,
    HDF_MACRO_GET_ONE_NODE,
    HDF_MACRO_CHECK_NODE_EXISTS,
    HDF_MACRO_CHECK_NODE_NOT_EXISTS,
    HDF_MACRO_GET_ONE_NODE_PROP,
    HDF_MACRO_CHECK_NODE_PROP_EXISTS,
    HDF_MACRO_CHECK_NODE_PROP_NOT_EXISTS,
    HDF_MACRO_TRAVERSAL_ONE_NODE,
    HDF_MACRO_GET_ARRAY_SIZE,
    HDF_MACRO_GET_ONE_ARRAY_ELEMENT,
    HDF_MACRO_TRAVERSAL_ONE_ARRAY,
	HDF_MACRO_TRAVERSAL_ALL_ARRAY,
    HDF_MACRO_TRAVERSAL_NODE_CHILD,
    HDF_MACRO_TRAVERSAL_NODE_CHILD_VARGS,
    HDF_MACRO_GET_ONE_FILE,
};

int32_t HdfConfigEntry(HdfTestMsg *msg);

#endif // HCS_PARSER_TEST_H
