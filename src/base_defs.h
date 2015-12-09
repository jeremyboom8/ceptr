/**
 * @ingroup def
 *
 * @file base_defs.h
 * @brief auto-generated system definitions
 *
 * NOTE: this file is auto-generated by base_defs.pl
 *
 * @copyright Copyright (C) 2013-2015, The MetaCurrency Project (Eric Harris-Braun, Arthur Brock, et. al).  This file is part of the Ceptr platform and is released under the terms of the license contained in the file LICENSE (GPLv3).
 */

#ifndef _CEPTR_BASE_DEFS_H
#define _CEPTR_BASE_DEFS_H
#include "sys_defs.h"

void base_defs(SemTable *sem);
void base_contexts(SemTable *sem);
SemanticID SYS_RECEPTOR;
SemanticID COMPOSITORY;
SemanticID DEV_COMPOSITORY;
SemanticID TEST_RECEPTOR;
SemanticID CLOCK_RECEPTOR;
SemanticID STREAM_READER;
SemanticID STREAM_WRITER;

enum SemanticContexts {SYS_CONTEXT,COMPOSITORY_CONTEXT,DEV_COMPOSITORY_CONTEXT,TEST_CONTEXT,CLOCK_CONTEXT,STREAM_READER_CONTEXT,STREAM_WRITER_CONTEXT,_NUM_DEFAULT_CONTEXTS};

/**********************************************************************************/
// SYS:Symbol
enum SYSSymbolIDs {
    NULL_SYMBOL_ID,
    STRUCTURES_ID,
    SYMBOLS_ID,
    PROCESSES_ID,
    PROTOCOLS_ID,
    RECEPTORS_ID,
    SCAPES_ID,
    DEFINITIONS_ID,
    STRUCTURE_SYMBOL_ID,
    STRUCTURE_SEQUENCE_ID,
    STRUCTURE_SYMBOL_SET_ID,
    STRUCTURE_OR_ID,
    STRUCTURE_ZERO_OR_MORE_ID,
    STRUCTURE_ONE_OR_MORE_ID,
    SYMBOL_OF_STRUCTURE_ID,
    STRUCTURE_ANYTHING_ID,
    STRUCTURE_LABEL_ID,
    STRUCTURE_DEFINITION_ID,
    STRUCTURE_ZERO_OR_ONE_ID,
    SYMBOL_STRUCTURE_ID,
    SYMBOL_LABEL_ID,
    SYMBOL_DEFINITION_ID,
    BOOLEAN_ID,
    SEMTREX_MATCH_PATH_ID,
    SEMTREX_SYMBOL_LITERAL_ID,
    SEMTREX_SYMBOL_LITERAL_NOT_ID,
    SEMTREX_SEQUENCE_ID,
    SEMTREX_OR_ID,
    SEMTREX_NOT_ID,
    SEMTREX_SYMBOL_ANY_ID,
    SEMTREX_ZERO_OR_MORE_ID,
    SEMTREX_ONE_OR_MORE_ID,
    SEMTREX_ZERO_OR_ONE_ID,
    SEMTREX_VALUE_LITERAL_ID,
    SEMTREX_VALUE_LITERAL_NOT_ID,
    SEMTREX_GROUP_ID,
    SEMTREX_WALK_ID,
    SEMTREX_DESCEND_ID,
    SEMTREX_SYMBOL_ID,
    SEMTREX_SYMBOL_SET_ID,
    SEMTREX_VALUE_SET_ID,
    SEMTREX_MATCH_ID,
    SEMTREX_MATCH_CURSOR_ID,
    SEMTREX_MATCH_RESULTS_ID,
    SEMTREX_MATCH_SYMBOL_ID,
    SEMTREX_MATCH_SIBLINGS_COUNT_ID,
    ASCII_CHAR_ID,
    ASCII_CHARS_ID,
    RECEPTOR_XADDR_ID,
    EXPECTATIONS_ID,
    SIGNALS_ID,
    DEFAULT_ASPECT_ID,
    FLUX_ID,
    SCAPE_SPEC_ID,
    ASPECT_IDENT_ID,
    ASPECT_TYPE_ID,
    ASPECT_LABEL_ID,
    ASPECT_DEF_ID,
    ASPECTS_ID,
    CARRIER_ID,
    BODY_ID,
    SIGNAL_UUID_ID,
    IN_RESPONSE_TO_UUID_ID,
    RECEPTOR_PATH_ID,
    RECEPTOR_ADDR_ID,
    FROM_ADDRESS_ID,
    TO_ADDRESS_ID,
    END_CONDITIONS_ID,
    ENVELOPE_ID,
    SIGNAL_ID,
    PENDING_SIGNALS_ID,
    CODE_PATH_ID,
    PROCESS_IDENT_ID,
    WAKEUP_REFERENCE_ID,
    PENDING_RESPONSE_ID,
    PENDING_RESPONSES_ID,
    RESPONSE_CARRIER_ID,
    PATTERN_ID,
    ACTION_ID,
    PARAMS_ID,
    EXPECTATION_ID,
    INTERPOLATE_SYMBOL_ID,
    PROCESS_NAME_ID,
    PROCESS_INTENTION_ID,
    PROCESS_SIGNATURE_ID,
    CODE_ID,
    PROCESS_DEFINITION_ID,
    SIGNATURE_LABEL_ID,
    SIGNATURE_STRUCTURE_ID,
    SIGNATURE_SYMBOL_ID,
    SIGNATURE_PROCESS_ID,
    SIGNATURE_PASSTHRU_ID,
    SIGNATURE_ANY_ID,
    SIGNATURE_OPTIONAL_ID,
    SIGNATURE_OUTPUT_TYPE_ID,
    SIGNATURE_INPUT_TYPE_ID,
    INPUT_SIGNATURE_ID,
    OUTPUT_SIGNATURE_ID,
    RUN_TREE_ID,
    PARAM_REF_ID,
    SIGNAL_REF_ID,
    RESULT_SYMBOL_ID,
    REDUCTION_ERROR_SYMBOL_ID,
    ROLE_ID,
    GOAL_ID,
    USAGE_ID,
    SOURCE_ID,
    DESTINATION_ID,
    EXPECT_ID,
    INITIATE_ID,
    PNAME_ID,
    INCLUSION_ID,
    ACTUAL_PROCESS_ID,
    ACTUAL_RECEPTOR_ID,
    ACTUAL_SYMBOL_ID,
    WHICH_PROCESS_ID,
    WHICH_RECEPTOR_ID,
    WHICH_SYMBOL_ID,
    RESOLUTION_ID,
    WHICH_GOAL_ID,
    WHICH_ROLE_ID,
    WHICH_USAGE_ID,
    CONNECTION_ID,
    PROTOCOL_BINDINGS_ID,
    PROTOCOL_LABEL_ID,
    PROTOCOL_DEFINITION_ID,
    MANIFEST_LABEL_ID,
    MANIFEST_SPEC_ID,
    MANIFEST_PAIR_ID,
    MANIFEST_ID,
    RECEPTOR_IDENTIFIER_ID,
    RECEPTOR_PACKAGE_ID,
    BINDING_PAIR_ID,
    BINDINGS_ID,
    RECEPTOR_ELAPSED_TIME_ID,
    RECEPTOR_LABEL_ID,
    RECEPTOR_DEFINITION_ID,
    RECEPTOR_STATE_ID,
    PARENT_CONTEXT_NUM_ID,
    CONTEXT_NUM_ID,
    RECEPTOR_INSTANCE_ID,
    SERIALIZED_RECEPTOR_ID,
    ACTIVE_RECEPTORS_ID,
    SYS_STATE_ID,
    YEAR_ID,
    MONTH_ID,
    DAY_ID,
    HOUR_ID,
    MINUTE_ID,
    SECOND_ID,
    TODAY_ID,
    NOW_ID,
    TICK_ID,
    ERROR_LOCATION_ID,
    ZERO_DIVIDE_ERR_ID,
    TOO_FEW_PARAMS_ERR_ID,
    TOO_MANY_PARAMS_ERR_ID,
    SIGNATURE_MISMATCH_ERR_ID,
    NOT_A_PROCESS_ERR_ID,
    NOT_IN_SIGNAL_CONTEXT_ERR_ID,
    INCOMPATIBLE_TYPE_ERR_ID,
    UNIX_ERRNO_ERR_ID,
    DEAD_STREAM_READ_ERR_ID,
    GET_XADDR_ID,
    TIMEOUT_AT_ID,
    COUNT_ID,
    UNLIMITED_ID,
    REPETITIONS_ID,
    STX_SL_ID,
    STX_OP_ID,
    STX_CP_ID,
    STX_SET_ID,
    STX_OS_ID,
    STX_CS_ID,
    STX_LABEL_ID,
    STX_OG_ID,
    STX_CG_ID,
    STX_EQ_ID,
    STX_NEQ_ID,
    STX_WALK_ID,
    STX_STAR_ID,
    STX_PLUS_ID,
    STX_Q_ID,
    STX_OR_ID,
    STX_COMMA_ID,
    STX_EXCEPT_ID,
    STX_NOT_ID,
    STX_VAL_S_ID,
    STX_VAL_C_ID,
    STX_VAL_I_ID,
    STX_VAL_F_ID,
    STX_TOKENS_ID,
    STX_SIBS_ID,
    STX_CHILD_ID,
    STX_POSTFIX_ID,
    TREE_DELTA_PATH_ID,
    TREE_DELTA_VALUE_ID,
    TREE_DELTA_COUNT_ID,
    TREE_DELTA_ADD_ID,
    TREE_DELTA_REPLACE_ID,
    NUM_SYS_SYMBOLS
};
SemanticID STRUCTURES;
SemanticID SYMBOLS;
SemanticID PROCESSES;
SemanticID PROTOCOLS;
SemanticID RECEPTORS;
SemanticID SCAPES;
SemanticID DEFINITIONS;
SemanticID STRUCTURE_SYMBOL;
SemanticID STRUCTURE_SEQUENCE;
SemanticID STRUCTURE_SYMBOL_SET;
SemanticID STRUCTURE_OR;
SemanticID STRUCTURE_ZERO_OR_MORE;
SemanticID STRUCTURE_ONE_OR_MORE;
SemanticID SYMBOL_OF_STRUCTURE;
SemanticID STRUCTURE_ANYTHING;
SemanticID STRUCTURE_LABEL;
SemanticID STRUCTURE_DEFINITION;
SemanticID STRUCTURE_ZERO_OR_ONE;
SemanticID SYMBOL_STRUCTURE;
SemanticID SYMBOL_LABEL;
SemanticID SYMBOL_DEFINITION;
SemanticID BOOLEAN;
SemanticID SEMTREX_MATCH_PATH;
SemanticID SEMTREX_SYMBOL_LITERAL;
SemanticID SEMTREX_SYMBOL_LITERAL_NOT;
SemanticID SEMTREX_SEQUENCE;
SemanticID SEMTREX_OR;
SemanticID SEMTREX_NOT;
SemanticID SEMTREX_SYMBOL_ANY;
SemanticID SEMTREX_ZERO_OR_MORE;
SemanticID SEMTREX_ONE_OR_MORE;
SemanticID SEMTREX_ZERO_OR_ONE;
SemanticID SEMTREX_VALUE_LITERAL;
SemanticID SEMTREX_VALUE_LITERAL_NOT;
SemanticID SEMTREX_GROUP;
SemanticID SEMTREX_WALK;
SemanticID SEMTREX_DESCEND;
SemanticID SEMTREX_SYMBOL;
SemanticID SEMTREX_SYMBOL_SET;
SemanticID SEMTREX_VALUE_SET;
SemanticID SEMTREX_MATCH;
SemanticID SEMTREX_MATCH_CURSOR;
SemanticID SEMTREX_MATCH_RESULTS;
SemanticID SEMTREX_MATCH_SYMBOL;
SemanticID SEMTREX_MATCH_SIBLINGS_COUNT;
SemanticID ASCII_CHAR;
SemanticID ASCII_CHARS;
SemanticID RECEPTOR_XADDR;
SemanticID EXPECTATIONS;
SemanticID SIGNALS;
SemanticID DEFAULT_ASPECT;
SemanticID FLUX;
SemanticID SCAPE_SPEC;
SemanticID ASPECT_IDENT;
SemanticID ASPECT_TYPE;
SemanticID ASPECT_LABEL;
SemanticID ASPECT_DEF;
SemanticID ASPECTS;
SemanticID CARRIER;
SemanticID BODY;
SemanticID SIGNAL_UUID;
SemanticID IN_RESPONSE_TO_UUID;
SemanticID RECEPTOR_PATH;
SemanticID RECEPTOR_ADDR;
SemanticID FROM_ADDRESS;
SemanticID TO_ADDRESS;
SemanticID END_CONDITIONS;
SemanticID ENVELOPE;
SemanticID SIGNAL;
SemanticID PENDING_SIGNALS;
SemanticID CODE_PATH;
SemanticID PROCESS_IDENT;
SemanticID WAKEUP_REFERENCE;
SemanticID PENDING_RESPONSE;
SemanticID PENDING_RESPONSES;
SemanticID RESPONSE_CARRIER;
SemanticID PATTERN;
SemanticID ACTION;
SemanticID PARAMS;
SemanticID EXPECTATION;
SemanticID INTERPOLATE_SYMBOL;
SemanticID PROCESS_NAME;
SemanticID PROCESS_INTENTION;
SemanticID PROCESS_SIGNATURE;
SemanticID CODE;
SemanticID PROCESS_DEFINITION;
SemanticID SIGNATURE_LABEL;
SemanticID SIGNATURE_STRUCTURE;
SemanticID SIGNATURE_SYMBOL;
SemanticID SIGNATURE_PROCESS;
SemanticID SIGNATURE_PASSTHRU;
SemanticID SIGNATURE_ANY;
SemanticID SIGNATURE_OPTIONAL;
SemanticID SIGNATURE_OUTPUT_TYPE;
SemanticID SIGNATURE_INPUT_TYPE;
SemanticID INPUT_SIGNATURE;
SemanticID OUTPUT_SIGNATURE;
SemanticID RUN_TREE;
SemanticID PARAM_REF;
SemanticID SIGNAL_REF;
SemanticID RESULT_SYMBOL;
SemanticID REDUCTION_ERROR_SYMBOL;
SemanticID ROLE;
SemanticID GOAL;
SemanticID USAGE;
SemanticID SOURCE;
SemanticID DESTINATION;
SemanticID EXPECT;
SemanticID INITIATE;
SemanticID PNAME;
SemanticID INCLUSION;
SemanticID ACTUAL_PROCESS;
SemanticID ACTUAL_RECEPTOR;
SemanticID ACTUAL_SYMBOL;
SemanticID WHICH_PROCESS;
SemanticID WHICH_RECEPTOR;
SemanticID WHICH_SYMBOL;
SemanticID RESOLUTION;
SemanticID WHICH_GOAL;
SemanticID WHICH_ROLE;
SemanticID WHICH_USAGE;
SemanticID CONNECTION;
SemanticID PROTOCOL_BINDINGS;
SemanticID PROTOCOL_LABEL;
SemanticID PROTOCOL_DEFINITION;
SemanticID MANIFEST_LABEL;
SemanticID MANIFEST_SPEC;
SemanticID MANIFEST_PAIR;
SemanticID MANIFEST;
SemanticID RECEPTOR_IDENTIFIER;
SemanticID RECEPTOR_PACKAGE;
SemanticID BINDING_PAIR;
SemanticID BINDINGS;
SemanticID RECEPTOR_ELAPSED_TIME;
SemanticID RECEPTOR_LABEL;
SemanticID RECEPTOR_DEFINITION;
SemanticID RECEPTOR_STATE;
SemanticID PARENT_CONTEXT_NUM;
SemanticID CONTEXT_NUM;
SemanticID RECEPTOR_INSTANCE;
SemanticID SERIALIZED_RECEPTOR;
SemanticID ACTIVE_RECEPTORS;
SemanticID SYS_STATE;
SemanticID YEAR;
SemanticID MONTH;
SemanticID DAY;
SemanticID HOUR;
SemanticID MINUTE;
SemanticID SECOND;
SemanticID TODAY;
SemanticID NOW;
SemanticID TICK;
SemanticID ERROR_LOCATION;
SemanticID ZERO_DIVIDE_ERR;
SemanticID TOO_FEW_PARAMS_ERR;
SemanticID TOO_MANY_PARAMS_ERR;
SemanticID SIGNATURE_MISMATCH_ERR;
SemanticID NOT_A_PROCESS_ERR;
SemanticID NOT_IN_SIGNAL_CONTEXT_ERR;
SemanticID INCOMPATIBLE_TYPE_ERR;
SemanticID UNIX_ERRNO_ERR;
SemanticID DEAD_STREAM_READ_ERR;
SemanticID GET_XADDR;
SemanticID TIMEOUT_AT;
SemanticID COUNT;
SemanticID UNLIMITED;
SemanticID REPETITIONS;
SemanticID STX_SL;
SemanticID STX_OP;
SemanticID STX_CP;
SemanticID STX_SET;
SemanticID STX_OS;
SemanticID STX_CS;
SemanticID STX_LABEL;
SemanticID STX_OG;
SemanticID STX_CG;
SemanticID STX_EQ;
SemanticID STX_NEQ;
SemanticID STX_WALK;
SemanticID STX_STAR;
SemanticID STX_PLUS;
SemanticID STX_Q;
SemanticID STX_OR;
SemanticID STX_COMMA;
SemanticID STX_EXCEPT;
SemanticID STX_NOT;
SemanticID STX_VAL_S;
SemanticID STX_VAL_C;
SemanticID STX_VAL_I;
SemanticID STX_VAL_F;
SemanticID STX_TOKENS;
SemanticID STX_SIBS;
SemanticID STX_CHILD;
SemanticID STX_POSTFIX;
SemanticID TREE_DELTA_PATH;
SemanticID TREE_DELTA_VALUE;
SemanticID TREE_DELTA_COUNT;
SemanticID TREE_DELTA_ADD;
SemanticID TREE_DELTA_REPLACE;

/**********************************************************************************/
// SYS:Structure
enum SYSStructureIDs {
    NULL_STRUCTURE_ID,
    BIT_ID,
    INTEGER_ID,
    FLOAT_ID,
    CHAR_ID,
    CSTRING_ID,
    SYMBOL_ID,
    STRUCTURE_ID,
    PROCESS_ID,
    PROTOCOL_ID,
    SCAPE_ID,
    ENUM_ID,
    TREE_PATH_ID,
    XADDR_ID,
    SURFACE_ID,
    TREE_ID,
    RECEPTOR_ID,
    SEMTREX_ID,
    STREAM_ID,
    UUID_ID,
    BLOB_ID,
    LIST_OF_STRUCTURES_AND_SYMBOLS_AND_PROCESSES_AND_PROTOCOLS_AND_RECEPTORS_AND_ZERO_OR_MORE_OF_SCAPES_ID,
    STRUCTURE_DEF_ID,
    TUPLE_OF_STRUCTURE_LABEL_AND_STRUCTURE_DEF_ID,
    ZERO_OR_MORE_OF_STRUCTURE_DEFINITION_ID,
    ONE_OR_MORE_OF_STRUCTURE_DEF_ID,
    ONE_OR_MORE_OF_STRUCTURE_SYMBOL_ID,
    PAIR_OF_STRUCTURE_DEF_ID,
    TUPLE_OF_SYMBOL_LABEL_AND_SYMBOL_STRUCTURE_ID,
    ZERO_OR_MORE_OF_SYMBOL_DEFINITION_ID,
    SEMTREX_DEF_ID,
    ONE_OR_MORE_OF_SEMTREX_SYMBOL_ID,
    SEMTREX_SYMBOL_LITERAL_DEF_ID,
    ONE_OR_MORE_OF_SEMTREX_DEF_ID,
    PAIR_OF_SEMTREX_DEF_ID,
    ZERO_OR_ONE_OF_ANY_SYMBOL_ID,
    ONE_OR_MORE_OF_ANY_SYMBOL_ID,
    SEMTREX_VALUE_LITERAL_DEF_ID,
    ONE_OR_MORE_OF_ASCII_CHAR_ID,
    ASPECT_ID,
    ONE_OR_MORE_OF_STRUCTURE_OF_ASPECT_ID,
    TUPLE_OF_ASPECT_TYPE_AND_ASPECT_LABEL_ID,
    ONE_OR_MORE_OF_ASPECT_DEF_ID,
    RECEPTOR_ADDRESS_ID,
    LIST_OF_FROM_ADDRESS_AND_TO_ADDRESS_AND_ASPECT_IDENT_AND_CARRIER_AND_SIGNAL_UUID_AND_ZERO_OR_ONE_OF_LOGICAL_OR_OF_END_CONDITIONS_AND_IN_RESPONSE_TO_UUID_ID,
    TUPLE_OF_ENVELOPE_AND_BODY_ID,
    ZERO_OR_MORE_OF_SIGNAL_ID,
    TUPLE_OF_PROCESS_IDENT_AND_CODE_PATH_ID,
    LIST_OF_SIGNAL_UUID_AND_CARRIER_AND_WAKEUP_REFERENCE_AND_END_CONDITIONS_ID,
    ZERO_OR_MORE_OF_PENDING_RESPONSE_ID,
    LIST_OF_CARRIER_AND_PATTERN_AND_ACTION_AND_PARAMS_AND_END_CONDITIONS_ID,
    ZERO_OR_MORE_OF_EXPECTATION_ID,
    ANY_SYMBOL_ID,
    LIST_OF_PROCESS_NAME_AND_PROCESS_INTENTION_AND_CODE_AND_PROCESS_SIGNATURE_ID,
    ZERO_OR_MORE_OF_PROCESS_DEFINITION_ID,
    ONE_OF_SIGNATURE_STRUCTURE_AND_SIGNATURE_SYMBOL_AND_SIGNATURE_PROCESS_AND_SIGNATURE_PASSTHRU_ID,
    SIGNATURE_SEMANTIC_VARIANTS_ID,
    TUPLE_OF_SIGNATURE_SEMANTIC_VARIANTS_AND_ZERO_OR_ONE_OF_SIGNATURE_OPTIONAL_ID,
    TUPLE_OF_SIGNATURE_LABEL_AND_SIGNATURE_INPUT_TYPE_ID,
    TUPLE_OF_SIGNATURE_LABEL_AND_SIGNATURE_OUTPUT_TYPE_ID,
    PROCESS_FORM_ID,
    LIST_OF_CODE_AND_PARAMS_AND_ZERO_OR_ONE_OF_CODE_ID,
    ZERO_OR_MORE_OF_ANY_SYMBOL_ID,
    ONE_OR_MORE_OF_ROLE_ID,
    LIST_OF_ROLE_AND_SOURCE_AND_PATTERN_AND_ACTION_ID,
    LIST_OF_ROLE_AND_DESTINATION_AND_ACTION_ID,
    TUPLE_OF_PNAME_AND_ONE_OR_MORE_OF_LOGICAL_OR_OF_RESOLUTION_AND_CONNECTION_ID,
    INTERACTION_ID,
    ZERO_OR_MORE_OF_PROTOCOL_DEFINITION_ID,
    TUPLE_OF_GOAL_AND_ACTUAL_PROCESS_ID,
    TUPLE_OF_ROLE_AND_ACTUAL_RECEPTOR_ID,
    TUPLE_OF_USAGE_AND_ACTUAL_SYMBOL_ID,
    MAPPING_ID,
    PAIR_OF_GOAL_ID,
    PAIR_OF_ROLE_ID,
    PAIR_OF_USAGE_ID,
    LINKING_ID,
    ONE_OR_MORE_OF_RESOLUTION_ID,
    LIST_OF_PROTOCOL_LABEL_AND_ZERO_OR_MORE_OF_ROLE_AND_ZERO_OR_MORE_OF_GOAL_AND_ZERO_OR_MORE_OF_USAGE_AND_ZERO_OR_MORE_OF_STRUCTURE_OF_INTERACTION_AND_ZERO_OR_MORE_OF_INCLUSION_ID,
    ZERO_OR_MORE_OF_STRUCTURE_OF_SCAPE_ID,
    TUPLE_OF_MANIFEST_LABEL_AND_MANIFEST_SPEC_ID,
    ONE_OR_MORE_OF_MANIFEST_PAIR_ID,
    LIST_OF_MANIFEST_AND_RECEPTOR_IDENTIFIER_AND_DEFINITIONS_ID,
    TUPLE_OF_MANIFEST_LABEL_AND_ANY_SYMBOL_ID,
    ONE_OR_MORE_OF_BINDING_PAIR_ID,
    RECEPTOR_IDENTITY_ID,
    TUPLE_OF_RECEPTOR_LABEL_AND_DEFINITIONS_ID,
    ZERO_OR_MORE_OF_RECEPTOR_DEFINITION_ID,
    LIST_OF_FLUX_AND_PENDING_SIGNALS_AND_PENDING_RESPONSES_AND_RECEPTOR_ELAPSED_TIME_ID,
    LIST_OF_CONTEXT_NUM_AND_PARENT_CONTEXT_NUM_AND_RECEPTOR_STATE_ID,
    ZERO_OR_MORE_OF_RECEPTOR_XADDR_ID,
    LIST_OF_ACTIVE_RECEPTORS_ID,
    DATE_ID,
    TIME_ID,
    TIMESTAMP_ID,
    REDUCTION_ERROR_ID,
    LOGICAL_OR_OF_COUNT_AND_UNLIMITED_ID,
    TUPLE_OF_ZERO_OR_ONE_OF_TIMEOUT_AT_AND_ZERO_OR_ONE_OF_REPETITIONS_ID,
    STX_TOKEN_LIST_ID,
    TREE_DELTA_ID,
    NUM_SYS_STRUCTURES
};
SemanticID BIT;
SemanticID INTEGER;
SemanticID FLOAT;
SemanticID CHAR;
SemanticID CSTRING;
SemanticID SYMBOL;
SemanticID STRUCTURE;
SemanticID PROCESS;
SemanticID PROTOCOL;
SemanticID SCAPE;
SemanticID ENUM;
SemanticID TREE_PATH;
SemanticID XADDR;
SemanticID SURFACE;
SemanticID TREE;
SemanticID RECEPTOR;
SemanticID SEMTREX;
SemanticID STREAM;
SemanticID UUID;
SemanticID BLOB;
SemanticID LIST_OF_STRUCTURES_AND_SYMBOLS_AND_PROCESSES_AND_PROTOCOLS_AND_RECEPTORS_AND_ZERO_OR_MORE_OF_SCAPES;
SemanticID STRUCTURE_DEF;
SemanticID TUPLE_OF_STRUCTURE_LABEL_AND_STRUCTURE_DEF;
SemanticID ZERO_OR_MORE_OF_STRUCTURE_DEFINITION;
SemanticID ONE_OR_MORE_OF_STRUCTURE_DEF;
SemanticID ONE_OR_MORE_OF_STRUCTURE_SYMBOL;
SemanticID PAIR_OF_STRUCTURE_DEF;
SemanticID TUPLE_OF_SYMBOL_LABEL_AND_SYMBOL_STRUCTURE;
SemanticID ZERO_OR_MORE_OF_SYMBOL_DEFINITION;
SemanticID SEMTREX_DEF;
SemanticID ONE_OR_MORE_OF_SEMTREX_SYMBOL;
SemanticID SEMTREX_SYMBOL_LITERAL_DEF;
SemanticID ONE_OR_MORE_OF_SEMTREX_DEF;
SemanticID PAIR_OF_SEMTREX_DEF;
SemanticID ZERO_OR_ONE_OF_ANY_SYMBOL;
SemanticID ONE_OR_MORE_OF_ANY_SYMBOL;
SemanticID SEMTREX_VALUE_LITERAL_DEF;
SemanticID ONE_OR_MORE_OF_ASCII_CHAR;
SemanticID ASPECT;
SemanticID ONE_OR_MORE_OF_STRUCTURE_OF_ASPECT;
SemanticID TUPLE_OF_ASPECT_TYPE_AND_ASPECT_LABEL;
SemanticID ONE_OR_MORE_OF_ASPECT_DEF;
SemanticID RECEPTOR_ADDRESS;
SemanticID LIST_OF_FROM_ADDRESS_AND_TO_ADDRESS_AND_ASPECT_IDENT_AND_CARRIER_AND_SIGNAL_UUID_AND_ZERO_OR_ONE_OF_LOGICAL_OR_OF_END_CONDITIONS_AND_IN_RESPONSE_TO_UUID;
SemanticID TUPLE_OF_ENVELOPE_AND_BODY;
SemanticID ZERO_OR_MORE_OF_SIGNAL;
SemanticID TUPLE_OF_PROCESS_IDENT_AND_CODE_PATH;
SemanticID LIST_OF_SIGNAL_UUID_AND_CARRIER_AND_WAKEUP_REFERENCE_AND_END_CONDITIONS;
SemanticID ZERO_OR_MORE_OF_PENDING_RESPONSE;
SemanticID LIST_OF_CARRIER_AND_PATTERN_AND_ACTION_AND_PARAMS_AND_END_CONDITIONS;
SemanticID ZERO_OR_MORE_OF_EXPECTATION;
SemanticID ANY_SYMBOL;
SemanticID LIST_OF_PROCESS_NAME_AND_PROCESS_INTENTION_AND_CODE_AND_PROCESS_SIGNATURE;
SemanticID ZERO_OR_MORE_OF_PROCESS_DEFINITION;
SemanticID ONE_OF_SIGNATURE_STRUCTURE_AND_SIGNATURE_SYMBOL_AND_SIGNATURE_PROCESS_AND_SIGNATURE_PASSTHRU;
SemanticID SIGNATURE_SEMANTIC_VARIANTS;
SemanticID TUPLE_OF_SIGNATURE_SEMANTIC_VARIANTS_AND_ZERO_OR_ONE_OF_SIGNATURE_OPTIONAL;
SemanticID TUPLE_OF_SIGNATURE_LABEL_AND_SIGNATURE_INPUT_TYPE;
SemanticID TUPLE_OF_SIGNATURE_LABEL_AND_SIGNATURE_OUTPUT_TYPE;
SemanticID PROCESS_FORM;
SemanticID LIST_OF_CODE_AND_PARAMS_AND_ZERO_OR_ONE_OF_CODE;
SemanticID ZERO_OR_MORE_OF_ANY_SYMBOL;
SemanticID ONE_OR_MORE_OF_ROLE;
SemanticID LIST_OF_ROLE_AND_SOURCE_AND_PATTERN_AND_ACTION;
SemanticID LIST_OF_ROLE_AND_DESTINATION_AND_ACTION;
SemanticID TUPLE_OF_PNAME_AND_ONE_OR_MORE_OF_LOGICAL_OR_OF_RESOLUTION_AND_CONNECTION;
SemanticID INTERACTION;
SemanticID ZERO_OR_MORE_OF_PROTOCOL_DEFINITION;
SemanticID TUPLE_OF_GOAL_AND_ACTUAL_PROCESS;
SemanticID TUPLE_OF_ROLE_AND_ACTUAL_RECEPTOR;
SemanticID TUPLE_OF_USAGE_AND_ACTUAL_SYMBOL;
SemanticID MAPPING;
SemanticID PAIR_OF_GOAL;
SemanticID PAIR_OF_ROLE;
SemanticID PAIR_OF_USAGE;
SemanticID LINKING;
SemanticID ONE_OR_MORE_OF_RESOLUTION;
SemanticID LIST_OF_PROTOCOL_LABEL_AND_ZERO_OR_MORE_OF_ROLE_AND_ZERO_OR_MORE_OF_GOAL_AND_ZERO_OR_MORE_OF_USAGE_AND_ZERO_OR_MORE_OF_STRUCTURE_OF_INTERACTION_AND_ZERO_OR_MORE_OF_INCLUSION;
SemanticID ZERO_OR_MORE_OF_STRUCTURE_OF_SCAPE;
SemanticID TUPLE_OF_MANIFEST_LABEL_AND_MANIFEST_SPEC;
SemanticID ONE_OR_MORE_OF_MANIFEST_PAIR;
SemanticID LIST_OF_MANIFEST_AND_RECEPTOR_IDENTIFIER_AND_DEFINITIONS;
SemanticID TUPLE_OF_MANIFEST_LABEL_AND_ANY_SYMBOL;
SemanticID ONE_OR_MORE_OF_BINDING_PAIR;
SemanticID RECEPTOR_IDENTITY;
SemanticID TUPLE_OF_RECEPTOR_LABEL_AND_DEFINITIONS;
SemanticID ZERO_OR_MORE_OF_RECEPTOR_DEFINITION;
SemanticID LIST_OF_FLUX_AND_PENDING_SIGNALS_AND_PENDING_RESPONSES_AND_RECEPTOR_ELAPSED_TIME;
SemanticID LIST_OF_CONTEXT_NUM_AND_PARENT_CONTEXT_NUM_AND_RECEPTOR_STATE;
SemanticID ZERO_OR_MORE_OF_RECEPTOR_XADDR;
SemanticID LIST_OF_ACTIVE_RECEPTORS;
SemanticID DATE;
SemanticID TIME;
SemanticID TIMESTAMP;
SemanticID REDUCTION_ERROR;
SemanticID LOGICAL_OR_OF_COUNT_AND_UNLIMITED;
SemanticID TUPLE_OF_ZERO_OR_ONE_OF_TIMEOUT_AT_AND_ZERO_OR_ONE_OF_REPETITIONS;
SemanticID STX_TOKEN_LIST;
SemanticID TREE_DELTA;

/**********************************************************************************/
// SYS:Process
enum SYSProcessIDs {
    NULL_PROCESS_ID,
    NOOP_ID,
    GET_ID,
    IF_ID,
    ITERATE_ID,
    SAY_ID,
    REQUEST_ID,
    LISTEN_ID,
    RESPOND_ID,
    QUOTE_ID,
    INTERPOLATE_FROM_MATCH_ID,
    RAISE_ID,
    STREAM_READ_ID,
    STREAM_WRITE_ID,
    STREAM_ALIVE_ID,
    CONCAT_STR_ID,
    ADD_INT_ID,
    SUB_INT_ID,
    MULT_INT_ID,
    DIV_INT_ID,
    MOD_INT_ID,
    EQ_INT_ID,
    LT_INT_ID,
    GT_INT_ID,
    LTE_INT_ID,
    GTE_INT_ID,
    MAGIC_ID,
    NUM_SYS_PROCESSES
};
SemanticID NOOP;
SemanticID GET;
SemanticID IF;
SemanticID ITERATE;
SemanticID SAY;
SemanticID REQUEST;
SemanticID LISTEN;
SemanticID RESPOND;
SemanticID QUOTE;
SemanticID INTERPOLATE_FROM_MATCH;
SemanticID RAISE;
SemanticID STREAM_READ;
SemanticID STREAM_WRITE;
SemanticID STREAM_ALIVE;
SemanticID CONCAT_STR;
SemanticID ADD_INT;
SemanticID SUB_INT;
SemanticID MULT_INT;
SemanticID DIV_INT;
SemanticID MOD_INT;
SemanticID EQ_INT;
SemanticID LT_INT;
SemanticID GT_INT;
SemanticID LTE_INT;
SemanticID GTE_INT;
SemanticID MAGIC;

/**********************************************************************************/
// SYS:Protocol
enum SYSProtocolIDs {
    NULL_PROTOCOL_ID,
    NUM_SYS_PROTOCOLS
};

/**********************************************************************************/
// COMPOSITORY:Symbol
enum COMPOSITORYSymbolIDs {
    NULL_COMPOSITORY_SYMBOL_ID,
    NUM_COMPOSITORY_SYMBOLS
};

/**********************************************************************************/
// COMPOSITORY:Structure
enum COMPOSITORYStructureIDs {
    NULL_COMPOSITORY_STRUCTURE_ID,
    NUM_COMPOSITORY_STRUCTURES
};

/**********************************************************************************/
// COMPOSITORY:Process
enum COMPOSITORYProcessIDs {
    NULL_COMPOSITORY_PROCESS_ID,
    NUM_COMPOSITORY_PROCESSES
};

/**********************************************************************************/
// COMPOSITORY:Protocol
enum COMPOSITORYProtocolIDs {
    NULL_COMPOSITORY_PROTOCOL_ID,
    NUM_COMPOSITORY_PROTOCOLS
};

/**********************************************************************************/
// DEV_COMPOSITORY:Symbol
enum DEV_COMPOSITORYSymbolIDs {
    NULL_DEV_COMPOSITORY_SYMBOL_ID,
    VERB_ID,
    COMMAND_PARAMETER_ID,
    SHELL_COMMAND_ID,
    SERVER_ID,
    CLIENT_ID,
    PING_ID,
    YUP_ID,
    HANDLER_ID,
    NUM_DEV_COMPOSITORY_SYMBOLS
};
SemanticID VERB;
SemanticID COMMAND_PARAMETER;
SemanticID SHELL_COMMAND;
SemanticID SERVER;
SemanticID CLIENT;
SemanticID PING;
SemanticID YUP;
SemanticID HANDLER;

/**********************************************************************************/
// DEV_COMPOSITORY:Structure
enum DEV_COMPOSITORYStructureIDs {
    NULL_DEV_COMPOSITORY_STRUCTURE_ID,
    COMMAND_ID,
    NUM_DEV_COMPOSITORY_STRUCTURES
};
SemanticID COMMAND;

/**********************************************************************************/
// DEV_COMPOSITORY:Process
enum DEV_COMPOSITORYProcessIDs {
    NULL_DEV_COMPOSITORY_PROCESS_ID,
    respond_with_yup_ID,
    NUM_DEV_COMPOSITORY_PROCESSES
};
SemanticID respond_with_yup;

/**********************************************************************************/
// DEV_COMPOSITORY:Protocol
enum DEV_COMPOSITORYProtocolIDs {
    NULL_DEV_COMPOSITORY_PROTOCOL_ID,
    ALIVE_ID,
    NUM_DEV_COMPOSITORY_PROTOCOLS
};
SemanticID ALIVE;

/**********************************************************************************/
// TEST:Symbol
enum TESTSymbolIDs {
    NULL_TEST_SYMBOL_ID,
    TEST_INT_SYMBOL_ID,
    TEST_INT_SYMBOL2_ID,
    TEST_FLOAT_SYMBOL_ID,
    TEST_STR_SYMBOL_ID,
    TEST_TREE_SYMBOL_ID,
    TEST_ANYTHING_SYMBOL_ID,
    TEST_ANYTHING_SYMBOL2_ID,
    TEST_STREAM_SYMBOL_ID,
    TEST_NAME_SYMBOL_ID,
    TEST_ALPHABETIZE_SCAPE_SYMBOL_ID,
    TEST_SYMBOL_SYMBOL_ID,
    TESTING_ID,
    NUM_TEST_SYMBOLS
};
SemanticID TEST_INT_SYMBOL;
SemanticID TEST_INT_SYMBOL2;
SemanticID TEST_FLOAT_SYMBOL;
SemanticID TEST_STR_SYMBOL;
SemanticID TEST_TREE_SYMBOL;
SemanticID TEST_ANYTHING_SYMBOL;
SemanticID TEST_ANYTHING_SYMBOL2;
SemanticID TEST_STREAM_SYMBOL;
SemanticID TEST_NAME_SYMBOL;
SemanticID TEST_ALPHABETIZE_SCAPE_SYMBOL;
SemanticID TEST_SYMBOL_SYMBOL;
SemanticID TESTING;

/**********************************************************************************/
// TEST:Structure
enum TESTStructureIDs {
    NULL_TEST_STRUCTURE_ID,
    NUM_TEST_STRUCTURES
};

/**********************************************************************************/
// TEST:Process
enum TESTProcessIDs {
    NULL_TEST_PROCESS_ID,
    NUM_TEST_PROCESSES
};

/**********************************************************************************/
// TEST:Protocol
enum TESTProtocolIDs {
    NULL_TEST_PROTOCOL_ID,
    NUM_TEST_PROTOCOLS
};

/**********************************************************************************/
// CLOCK:Symbol
enum CLOCKSymbolIDs {
    NULL_CLOCK_SYMBOL_ID,
    CLOCK_TELL_TIME_ID,
    NUM_CLOCK_SYMBOLS
};
SemanticID CLOCK_TELL_TIME;

/**********************************************************************************/
// CLOCK:Structure
enum CLOCKStructureIDs {
    NULL_CLOCK_STRUCTURE_ID,
    NUM_CLOCK_STRUCTURES
};

/**********************************************************************************/
// CLOCK:Process
enum CLOCKProcessIDs {
    NULL_CLOCK_PROCESS_ID,
    NUM_CLOCK_PROCESSES
};

/**********************************************************************************/
// CLOCK:Protocol
enum CLOCKProtocolIDs {
    NULL_CLOCK_PROTOCOL_ID,
    NUM_CLOCK_PROTOCOLS
};

/**********************************************************************************/
// STREAM_READER:Symbol
enum STREAM_READERSymbolIDs {
    NULL_STREAM_READER_SYMBOL_ID,
    LINE_ID,
    NUM_STREAM_READER_SYMBOLS
};
SemanticID LINE;

/**********************************************************************************/
// STREAM_READER:Structure
enum STREAM_READERStructureIDs {
    NULL_STREAM_READER_STRUCTURE_ID,
    NUM_STREAM_READER_STRUCTURES
};

/**********************************************************************************/
// STREAM_READER:Process
enum STREAM_READERProcessIDs {
    NULL_STREAM_READER_PROCESS_ID,
    NUM_STREAM_READER_PROCESSES
};

/**********************************************************************************/
// STREAM_READER:Protocol
enum STREAM_READERProtocolIDs {
    NULL_STREAM_READER_PROTOCOL_ID,
    NUM_STREAM_READER_PROTOCOLS
};

/**********************************************************************************/
// STREAM_WRITER:Symbol
enum STREAM_WRITERSymbolIDs {
    NULL_STREAM_WRITER_SYMBOL_ID,
    NUM_STREAM_WRITER_SYMBOLS
};

/**********************************************************************************/
// STREAM_WRITER:Structure
enum STREAM_WRITERStructureIDs {
    NULL_STREAM_WRITER_STRUCTURE_ID,
    NUM_STREAM_WRITER_STRUCTURES
};

/**********************************************************************************/
// STREAM_WRITER:Process
enum STREAM_WRITERProcessIDs {
    NULL_STREAM_WRITER_PROCESS_ID,
    NUM_STREAM_WRITER_PROCESSES
};

/**********************************************************************************/
// STREAM_WRITER:Protocol
enum STREAM_WRITERProtocolIDs {
    NULL_STREAM_WRITER_PROTOCOL_ID,
    NUM_STREAM_WRITER_PROTOCOLS
};

#endif
