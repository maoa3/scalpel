del_items(0x8014B5BC)
SetType(0x8014B5BC, "void _cd_seek(int sec)")
del_items(0x8014B618)
SetType(0x8014B618, "void init_cdstream(int chunksize, unsigned char *buf, int bufsize)")
del_items(0x8014B640)
SetType(0x8014B640, "void flush_cdstream()")
del_items(0x8014B694)
SetType(0x8014B694, "void reset_cdstream()")
del_items(0x8014B6C4)
SetType(0x8014B6C4, "void kill_stream_handlers()")
del_items(0x8014B6F4)
SetType(0x8014B6F4, "void stream_cdready_handler(unsigned char status, unsigned char *result, int idx, int i, int sec, struct CdlLOC subcode[3], unsigned long OldGp)")
del_items(0x8014B924)
SetType(0x8014B924, "void install_stream_handlers()")
del_items(0x8014B960)
SetType(0x8014B960, "void cdstream_service()")
del_items(0x8014BA50)
SetType(0x8014BA50, "int cdstream_get_chunk(unsigned char **data, struct strheader **h)")
del_items(0x8014BB68)
SetType(0x8014BB68, "int cdstream_is_last_chunk()")
del_items(0x8014BB80)
SetType(0x8014BB80, "void cdstream_discard_chunk()")
del_items(0x8014BCA0)
SetType(0x8014BCA0, "void close_cdstream()")
del_items(0x8014BCE0)
SetType(0x8014BCE0, "void wait_cdstream()")
del_items(0x8014BCF0)
SetType(0x8014BCF0, "int open_cdstream(char *fname, int secoffs, int seclen)")
del_items(0x8014BDF4)
SetType(0x8014BDF4, "int set_mdec_img_buffer(unsigned char *p)")
del_items(0x8014BE28)
SetType(0x8014BE28, "void start_mdec_decode(unsigned char *data, int x, int y, int w, int h)")
del_items(0x8014BF9C)
SetType(0x8014BF9C, "void DCT_out_handler()")
del_items(0x8014C04C)
SetType(0x8014C04C, "void init_mdec(unsigned char *vlc_buffer, unsigned char *vlc_table)")
del_items(0x8014C0BC)
SetType(0x8014C0BC, "void init_mdec_buffer(char *buf, int size)")
del_items(0x8014C0D8)
SetType(0x8014C0D8, "int split_poly_area(struct POLY_FT4 *p, struct POLY_FT4 *bp, int offs, struct RECT *r, int sx, int sy, int correct)")
del_items(0x8014C4C8)
SetType(0x8014C4C8, "void rebuild_mdec_polys(int x, int y)")
del_items(0x8014C69C)
SetType(0x8014C69C, "void clear_mdec_frame()")
del_items(0x8014C6A8)
SetType(0x8014C6A8, "void draw_mdec_polys()")
del_items(0x8014C9F4)
SetType(0x8014C9F4, "void invalidate_mdec_frame()")
del_items(0x8014CA08)
SetType(0x8014CA08, "int is_frame_decoded()")
del_items(0x8014CA14)
SetType(0x8014CA14, "void init_mdec_polys(int x, int y, int w, int h, int bx1, int by1, int bx2, int by2, int correct)")
del_items(0x8014CDA4)
SetType(0x8014CDA4, "void set_mdec_poly_bright(int br)")
del_items(0x8014CE0C)
SetType(0x8014CE0C, "int init_mdec_stream(unsigned char *buftop, int sectors_per_frame, int mdec_frames_per_buffer)")
del_items(0x8014CE5C)
SetType(0x8014CE5C, "void init_mdec_audio(int rate)")
del_items(0x8014CF3C)
SetType(0x8014CF3C, "void kill_mdec_audio()")
del_items(0x8014CF6C)
SetType(0x8014CF6C, "void stop_mdec_audio()")
del_items(0x8014CF90)
SetType(0x8014CF90, "void play_mdec_audio(unsigned char *data, struct asec *h)")
del_items(0x8014D224)
SetType(0x8014D224, "void set_mdec_audio_volume(short vol, struct SpuVoiceAttr voice_attr)")
del_items(0x8014D2F0)
SetType(0x8014D2F0, "void resync_audio()")
del_items(0x8014D300)
SetType(0x8014D300, "void stop_mdec_stream()")
del_items(0x8014D354)
SetType(0x8014D354, "void dequeue_stream()")
del_items(0x8014D440)
SetType(0x8014D440, "void dequeue_animation()")
del_items(0x8014D5F0)
SetType(0x8014D5F0, "void decode_mdec_stream(int frames_elapsed)")
del_items(0x8014D7D0)
SetType(0x8014D7D0, "void play_mdec_stream(char *filename, int speed, int start, int end)")
del_items(0x8014D884)
SetType(0x8014D884, "void clear_mdec_queue()")
del_items(0x8014D8B0)
SetType(0x8014D8B0, "void StrClearVRAM()")
del_items(0x8014D970)
SetType(0x8014D970, "short PlayFMVOverLay(char *filename, int w, int h)")
del_items(0x8014DE34)
SetType(0x8014DE34, "unsigned short GetDown__C4CPad(struct CPad *this)")