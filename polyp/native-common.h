#ifndef foonativecommonhfoo
#define foonativecommonhfoo

/* $Id$ */

/***
  This file is part of polypaudio.
 
  polypaudio is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published
  by the Free Software Foundation; either version 2 of the License,
  or (at your option) any later version.
 
  polypaudio is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
  General Public License for more details.
 
  You should have received a copy of the GNU General Public License
  along with polypaudio; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
  USA.
***/

#include "cdecl.h"
#include "polyplib-def.h"

PA_C_DECL_BEGIN

enum {
    PA_COMMAND_ERROR,
    PA_COMMAND_TIMEOUT, /* pseudo command */
    PA_COMMAND_REPLY,
    PA_COMMAND_CREATE_PLAYBACK_STREAM,
    PA_COMMAND_DELETE_PLAYBACK_STREAM,
    PA_COMMAND_CREATE_RECORD_STREAM,
    PA_COMMAND_DELETE_RECORD_STREAM,
    PA_COMMAND_EXIT,
    PA_COMMAND_REQUEST,
    PA_COMMAND_AUTH,
    PA_COMMAND_SET_NAME,
    PA_COMMAND_LOOKUP_SINK,
    PA_COMMAND_LOOKUP_SOURCE,
    PA_COMMAND_DRAIN_PLAYBACK_STREAM,
    PA_COMMAND_PLAYBACK_STREAM_KILLED,
    PA_COMMAND_RECORD_STREAM_KILLED,
    PA_COMMAND_STAT,
    PA_COMMAND_GET_PLAYBACK_LATENCY,
    PA_COMMAND_CREATE_UPLOAD_STREAM,
    PA_COMMAND_DELETE_UPLOAD_STREAM,
    PA_COMMAND_FINISH_UPLOAD_STREAM,
    PA_COMMAND_PLAY_SAMPLE,
    PA_COMMAND_REMOVE_SAMPLE,
    PA_COMMAND_GET_SERVER_INFO,
    PA_COMMAND_GET_SINK_INFO,
    PA_COMMAND_GET_SINK_INFO_LIST,
    PA_COMMAND_GET_SOURCE_INFO,
    PA_COMMAND_GET_SOURCE_INFO_LIST,
    PA_COMMAND_GET_MODULE_INFO,
    PA_COMMAND_GET_MODULE_INFO_LIST,
    PA_COMMAND_GET_CLIENT_INFO,
    PA_COMMAND_GET_CLIENT_INFO_LIST,
    PA_COMMAND_GET_SINK_INPUT_INFO,
    PA_COMMAND_GET_SINK_INPUT_INFO_LIST,
    PA_COMMAND_GET_SOURCE_OUTPUT_INFO,
    PA_COMMAND_GET_SOURCE_OUTPUT_INFO_LIST,
    PA_COMMAND_GET_SAMPLE_INFO,
    PA_COMMAND_GET_SAMPLE_INFO_LIST,
    PA_COMMAND_SUBSCRIBE,
    PA_COMMAND_SUBSCRIBE_EVENT,
    PA_COMMAND_SET_SINK_VOLUME,
    PA_COMMAND_SET_SINK_INPUT_VOLUME,
    PA_COMMAND_CORK_PLAYBACK_STREAM,
    PA_COMMAND_FLUSH_PLAYBACK_STREAM,
    PA_COMMAND_TRIGGER_PLAYBACK_STREAM,
    PA_COMMAND_SET_DEFAULT_SINK,
    PA_COMMAND_SET_DEFAULT_SOURCE,
    PA_COMMAND_MAX
};

#define PA_NATIVE_COOKIE_LENGTH 256
#define PA_NATIVE_COOKIE_FILE ".polypaudio-cookie"

PA_C_DECL_END

#endif
