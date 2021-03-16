#ifndef TASK_READER_H
#define TASK_READER_H

/* Generated by flatcc 0.6.1-dev FlatBuffers schema compiler for C by dvide.com */

#ifndef FLATBUFFERS_COMMON_READER_H
#include "flatbuffers_common_reader.h"
#endif
#include "flatcc/flatcc_flatbuffers.h"
#ifndef __alignas_is_defined
#include <stdalign.h>
#endif
#include "flatcc/flatcc_prologue.h"
#ifndef flatbuffers_identifier
#define flatbuffers_identifier 0
#endif
#ifndef flatbuffers_extension
#define flatbuffers_extension ".bin"
#endif


typedef const struct Task_table *Task_table_t;
typedef struct Task_table *Task_mutable_table_t;
typedef const flatbuffers_uoffset_t *Task_vec_t;
typedef flatbuffers_uoffset_t *Task_mutable_vec_t;
#ifndef Task_file_identifier
#define Task_file_identifier flatbuffers_identifier
#endif
/* deprecated, use Task_file_identifier */
#ifndef Task_identifier
#define Task_identifier flatbuffers_identifier
#endif
#define Task_type_hash ((flatbuffers_thash_t)0x76ef3d8c)
#define Task_type_identifier "\x8c\x3d\xef\x76"



struct Task_table { uint8_t unused__; };

static inline size_t Task_vec_len(Task_vec_t vec)
__flatbuffers_vec_len(vec)
static inline Task_table_t Task_vec_at(Task_vec_t vec, size_t i)
__flatbuffers_offset_vec_at(Task_table_t, vec, i, 0)
__flatbuffers_table_as_root(Task)

__flatbuffers_define_scalar_field(0, Task, id, flatbuffers_uint64, uint64_t, UINT64_C(0))
__flatbuffers_define_string_field(1, Task, text, 0)
__flatbuffers_define_scalar_field(2, Task, date_created, flatbuffers_uint64, uint64_t, UINT64_C(0))
__flatbuffers_define_scalar_field(3, Task, date_finished, flatbuffers_uint64, uint64_t, UINT64_C(0))


#include "flatcc/flatcc_epilogue.h"
#endif /* TASK_READER_H */
