/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Copyright by The HDF Group.                                               *
 * All rights reserved.                                                      *
 *                                                                           *
 * This file is part of HDF5.  The full HDF5 copyright notice, including     *
 * terms governing use, modification, and redistribution, is contained in    *
 * the COPYING file, which can be found at the root of the source code       *
 * distribution tree, or in https://support.hdfgroup.org/ftp/HDF5/releases.  *
 * If you do not have access to either file, you may request a copy from     *
 * help@hdfgroup.org.                                                        *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef VOL_DATASET_TEST_H
#define VOL_DATASET_TEST_H

#include "vol_test.h"

int vol_dataset_test(void);

/************************************************
 *                                              *
 *      VOL connector Dataset test defines      *
 *                                              *
 ************************************************/

#define DATASET_CREATE_UNDER_ROOT_DSET_NAME  "/dset_under_root"
#define DATASET_CREATE_UNDER_ROOT_SPACE_RANK 2

#define DATASET_CREATE_ANONYMOUS_DATASET_NAME "anon_dset"
#define DATASET_CREATE_ANONYMOUS_SPACE_RANK   2

#define DATASET_CREATE_UNDER_EXISTING_SPACE_RANK 2
#define DATASET_CREATE_UNDER_EXISTING_DSET_NAME  "nested_dset"

#define DATASET_CREATE_NULL_DATASPACE_TEST_SUBGROUP_NAME "dataset_with_null_space_test"
#define DATASET_CREATE_NULL_DATASPACE_TEST_DSET_NAME     "dataset_with_null_space"

#define DATASET_CREATE_SCALAR_DATASPACE_TEST_SUBGROUP_NAME "dataset_with_scalar_space_test"
#define DATASET_CREATE_SCALAR_DATASPACE_TEST_DSET_NAME     "dataset_with_scalar_space"

#define DATASET_PREDEFINED_TYPE_TEST_SPACE_RANK    2
#define DATASET_PREDEFINED_TYPE_TEST_BASE_NAME     "predefined_type_dset"
#define DATASET_PREDEFINED_TYPE_TEST_SUBGROUP_NAME "predefined_type_dataset_test"

#define DATASET_STRING_TYPE_TEST_STRING_LENGTH  40
#define DATASET_STRING_TYPE_TEST_SPACE_RANK     2
#define DATASET_STRING_TYPE_TEST_DSET_NAME1     "fixed_length_string_dset"
#define DATASET_STRING_TYPE_TEST_DSET_NAME2     "variable_length_string_dset"
#define DATASET_STRING_TYPE_TEST_SUBGROUP_NAME  "string_type_dataset_test"

#define DATASET_ENUM_TYPE_TEST_VAL_BASE_NAME "INDEX"
#define DATASET_ENUM_TYPE_TEST_SUBGROUP_NAME "enum_type_dataset_test"
#define DATASET_ENUM_TYPE_TEST_NUM_MEMBERS   16
#define DATASET_ENUM_TYPE_TEST_SPACE_RANK    2
#define DATASET_ENUM_TYPE_TEST_DSET_NAME1    "enum_native_dset"
#define DATASET_ENUM_TYPE_TEST_DSET_NAME2    "enum_non_native_dset"

#define DATASET_ARRAY_TYPE_TEST_SUBGROUP_NAME "array_type_dataset_test"
#define DATASET_ARRAY_TYPE_TEST_DSET_NAME1    "array_type_test1"
#define DATASET_ARRAY_TYPE_TEST_DSET_NAME2    "array_type_test2"
#define DATASET_ARRAY_TYPE_TEST_DSET_NAME3    "array_type_test3"
#define DATASET_ARRAY_TYPE_TEST_SPACE_RANK    2
#define DATASET_ARRAY_TYPE_TEST_RANK1         2
#define DATASET_ARRAY_TYPE_TEST_RANK2         2
#define DATASET_ARRAY_TYPE_TEST_RANK3         2

#define DATASET_COMPOUND_TYPE_TEST_SUBGROUP_NAME "compound_type_dataset_test"
#define DATASET_COMPOUND_TYPE_TEST_DSET_NAME     "compound_type_test"
#define DATASET_COMPOUND_TYPE_TEST_MAX_SUBTYPES  10
#define DATASET_COMPOUND_TYPE_TEST_MAX_PASSES    5
#define DATASET_COMPOUND_TYPE_TEST_DSET_RANK     2

#define DATASET_SHAPE_TEST_DSET_BASE_NAME "dataset_shape_test"
#define DATASET_SHAPE_TEST_SUBGROUP_NAME  "dataset_shape_test"
#define DATASET_SHAPE_TEST_NUM_ITERATIONS 5
#define DATASET_SHAPE_TEST_MAX_DIMS       5

#define DATASET_CREATION_PROPERTIES_TEST_TRACK_TIMES_YES_DSET_NAME "track_times_true_test"
#define DATASET_CREATION_PROPERTIES_TEST_TRACK_TIMES_NO_DSET_NAME  "track_times_false_test"
#define DATASET_CREATION_PROPERTIES_TEST_PHASE_CHANGE_DSET_NAME    "attr_phase_change_test"
#define DATASET_CREATION_PROPERTIES_TEST_ALLOC_TIMES_BASE_NAME     "alloc_time_test"
#define DATASET_CREATION_PROPERTIES_TEST_FILL_TIMES_BASE_NAME      "fill_times_test"
#define DATASET_CREATION_PROPERTIES_TEST_CRT_ORDER_BASE_NAME       "creation_order_test"
#define DATASET_CREATION_PROPERTIES_TEST_LAYOUTS_BASE_NAME         "layout_test"
#define DATASET_CREATION_PROPERTIES_TEST_FILTERS_DSET_NAME         "filters_test"
#define DATASET_CREATION_PROPERTIES_TEST_GROUP_NAME                "creation_properties_test"
#define DATASET_CREATION_PROPERTIES_TEST_CHUNK_DIM_RANK            DATASET_CREATION_PROPERTIES_TEST_SHAPE_RANK
#define DATASET_CREATION_PROPERTIES_TEST_MAX_COMPACT               12
#define DATASET_CREATION_PROPERTIES_TEST_MIN_DENSE                 8
#define DATASET_CREATION_PROPERTIES_TEST_SHAPE_RANK                3

#define DATASET_SMALL_WRITE_TEST_ALL_DSET_SPACE_RANK 3
#define DATASET_SMALL_WRITE_TEST_ALL_DSET_DTYPESIZE  sizeof(int)
#define DATASET_SMALL_WRITE_TEST_ALL_DSET_DTYPE      H5T_NATIVE_INT
#define DATASET_SMALL_WRITE_TEST_ALL_DSET_NAME       "dataset_write_small_all"

#define DATASET_SMALL_WRITE_TEST_HYPERSLAB_DSET_SPACE_RANK 3
#define DATASET_SMALL_WRITE_TEST_HYPERSLAB_DSET_DTYPESIZE  sizeof(int)
#define DATASET_SMALL_WRITE_TEST_HYPERSLAB_DSET_DTYPE      H5T_NATIVE_INT
#define DATASET_SMALL_WRITE_TEST_HYPERSLAB_DSET_NAME       "dataset_write_small_hyperslab"

#define DATASET_SMALL_WRITE_TEST_POINT_SELECTION_DSET_SPACE_RANK 3
#define DATASET_SMALL_WRITE_TEST_POINT_SELECTION_DSET_DTYPESIZE  sizeof(int)
#define DATASET_SMALL_WRITE_TEST_POINT_SELECTION_DSET_DTYPE      H5T_NATIVE_INT
#define DATASET_SMALL_WRITE_TEST_POINT_SELECTION_NUM_POINTS      10
#define DATASET_SMALL_WRITE_TEST_POINT_SELECTION_DSET_NAME       "dataset_write_small_point_selection"

#ifndef NO_LARGE_TESTS
#define DATASET_LARGE_WRITE_TEST_ALL_DSET_SPACE_RANK 3
#define DATASET_LARGE_WRITE_TEST_ALL_DSET_DTYPESIZE  sizeof(int)
#define DATASET_LARGE_WRITE_TEST_ALL_DSET_DTYPE      H5T_NATIVE_INT
#define DATASET_LARGE_WRITE_TEST_ALL_DSET_NAME       "dataset_write_large_all"

#define DATASET_LARGE_WRITE_TEST_HYPERSLAB_DSET_SPACE_RANK 3
#define DATASET_LARGE_WRITE_TEST_HYPERSLAB_DSET_DTYPESIZE  sizeof(int)
#define DATASET_LARGE_WRITE_TEST_HYPERSLAB_DSET_DTYPE      H5T_NATIVE_INT
#define DATASET_LARGE_WRITE_TEST_HYPERSLAB_DSET_NAME       "dataset_write_large_hyperslab"

#define DATASET_LARGE_WRITE_TEST_POINT_SELECTION_DSET_SPACE_RANK 3
#define DATASET_LARGE_WRITE_TEST_POINT_SELECTION_DSET_DTYPESIZE  sizeof(int)
#define DATASET_LARGE_WRITE_TEST_POINT_SELECTION_DSET_DTYPE      H5T_NATIVE_INT
#define DATASET_LARGE_WRITE_TEST_POINT_SELECTION_DSET_NAME       "dataset_write_large_point_selection"
#endif

#define DATASET_SMALL_READ_TEST_ALL_DSET_SPACE_RANK 3
#define DATASET_SMALL_READ_TEST_ALL_DSET_DTYPESIZE  sizeof(int)
#define DATASET_SMALL_READ_TEST_ALL_DSET_DTYPE      H5T_NATIVE_INT
#define DATASET_SMALL_READ_TEST_ALL_DSET_NAME       "dataset_read_small_all"

#define DATASET_SMALL_READ_TEST_HYPERSLAB_DSET_SPACE_RANK 3
#define DATASET_SMALL_READ_TEST_HYPERSLAB_DSET_DTYPESIZE  sizeof(int)
#define DATASET_SMALL_READ_TEST_HYPERSLAB_DSET_DTYPE      H5T_NATIVE_INT
#define DATASET_SMALL_READ_TEST_HYPERSLAB_DSET_NAME       "dataset_read_small_hyperslab"

#define DATASET_SMALL_READ_TEST_POINT_SELECTION_DSET_SPACE_RANK 3
#define DATASET_SMALL_READ_TEST_POINT_SELECTION_DSET_DTYPESIZE  sizeof(int)
#define DATASET_SMALL_READ_TEST_POINT_SELECTION_DSET_DTYPE      H5T_NATIVE_INT
#define DATASET_SMALL_READ_TEST_POINT_SELECTION_NUM_POINTS      10
#define DATASET_SMALL_READ_TEST_POINT_SELECTION_DSET_NAME       "dataset_read_small_point_selection"

#ifndef NO_LARGE_TESTS
#define DATASET_LARGE_READ_TEST_ALL_DSET_SPACE_RANK 3
#define DATASET_LARGE_READ_TEST_ALL_DSET_DTYPESIZE  sizeof(int)
#define DATASET_LARGE_READ_TEST_ALL_DSET_DTYPE      H5T_NATIVE_INT
#define DATASET_LARGE_READ_TEST_ALL_DSET_NAME       "dataset_read_large_all"

#define DATASET_LARGE_READ_TEST_HYPERSLAB_DSET_SPACE_RANK 3
#define DATASET_LARGE_READ_TEST_HYPERSLAB_DSET_DTYPESIZE  sizeof(int)
#define DATASET_LARGE_READ_TEST_HYPERSLAB_DSET_DTYPE      H5T_NATIVE_INT
#define DATASET_LARGE_READ_TEST_HYPERSLAB_DSET_NAME       "dataset_read_large_hyperslab"

#define DATASET_LARGE_READ_TEST_POINT_SELECTION_DSET_SPACE_RANK 3
#define DATASET_LARGE_READ_TEST_POINT_SELECTION_DSET_DTYPESIZE  sizeof(int)
#define DATASET_LARGE_READ_TEST_POINT_SELECTION_DSET_DTYPE      H5T_NATIVE_INT
#define DATASET_LARGE_READ_TEST_POINT_SELECTION_DSET_NAME       "dataset_read_large_point_selection"
#endif

#define DATASET_DATA_VERIFY_WRITE_TEST_DSET_SPACE_RANK 3
#define DATASET_DATA_VERIFY_WRITE_TEST_DSET_DTYPESIZE  sizeof(int)
#define DATASET_DATA_VERIFY_WRITE_TEST_DSET_DTYPE      H5T_NATIVE_INT
#define DATASET_DATA_VERIFY_WRITE_TEST_NUM_POINTS      10
#define DATASET_DATA_VERIFY_WRITE_TEST_DSET_NAME       "dataset_data_verification"

#define DATASET_SET_EXTENT_TEST_SPACE_RANK 2
#define DATASET_SET_EXTENT_TEST_DSET_NAME  "set_extent_test_dset"

#define DATASET_PROPERTY_LIST_TEST_SUBGROUP_NAME "dataset_property_list_test_group"
#define DATASET_PROPERTY_LIST_TEST_SPACE_RANK    2
#define DATASET_PROPERTY_LIST_TEST_DSET_NAME1    "property_list_test_dataset1"
#define DATASET_PROPERTY_LIST_TEST_DSET_NAME2    "property_list_test_dataset2"
#define DATASET_PROPERTY_LIST_TEST_DSET_NAME3    "property_list_test_dataset3"
#define DATASET_PROPERTY_LIST_TEST_DSET_NAME4    "property_list_test_dataset4"

#define DATASET_UNUSED_APIS_TEST_SPACE_RANK 2
#define DATASET_UNUSED_APIS_TEST_DSET_NAME  "unused_apis_dset"

#endif
