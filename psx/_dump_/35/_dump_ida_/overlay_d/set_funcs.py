del_items(0x8014C3CC)
SetType(0x8014C3CC, "void EA_cd_seek(int secnum)")
del_items(0x8014C3D4)
SetType(0x8014C3D4, "void MY_CdGetSector(unsigned long *src, unsigned long *dst, int size)")
del_items(0x8014C408)
SetType(0x8014C408, "void init_cdstream(int chunksize, unsigned char *buf, int bufsize)")
del_items(0x8014C418)
SetType(0x8014C418, "void flush_cdstream()")
del_items(0x8014C43C)
SetType(0x8014C43C, "int check_complete_frame(struct strheader *h)")
del_items(0x8014C4BC)
SetType(0x8014C4BC, "void reset_cdstream()")
del_items(0x8014C4E4)
SetType(0x8014C4E4, "void kill_stream_handlers()")
del_items(0x8014C548)
SetType(0x8014C548, "void stream_cdready_handler(unsigned long *addr, int idx, int i, int sec)")
del_items(0x8014C748)
SetType(0x8014C748, "void CD_stream_handler(struct TASK *T)")
del_items(0x8014C83C)
SetType(0x8014C83C, "void install_stream_handlers()")
del_items(0x8014C8AC)
SetType(0x8014C8AC, "void cdstream_service()")
del_items(0x8014C944)
SetType(0x8014C944, "int cdstream_get_chunk(unsigned char **data, struct strheader **h)")
del_items(0x8014CA68)
SetType(0x8014CA68, "int cdstream_is_last_chunk()")
del_items(0x8014CA80)
SetType(0x8014CA80, "void cdstream_discard_chunk()")
del_items(0x8014CB80)
SetType(0x8014CB80, "void close_cdstream()")
del_items(0x8014CBF4)
SetType(0x8014CBF4, "int open_cdstream(char *fname, int secoffs, int seclen)")
del_items(0x8014CD90)
SetType(0x8014CD90, "int set_mdec_img_buffer(unsigned char *p)")
del_items(0x8014CDC4)
SetType(0x8014CDC4, "void start_mdec_decode(unsigned char *data, int x, int y, int w, int h)")
del_items(0x8014CF48)
SetType(0x8014CF48, "void DCT_out_handler()")
del_items(0x8014CFE4)
SetType(0x8014CFE4, "void init_mdec(unsigned char *vlc_buffer, unsigned char *vlc_table)")
del_items(0x8014D054)
SetType(0x8014D054, "void init_mdec_buffer(char *buf, int size)")
del_items(0x8014D070)
SetType(0x8014D070, "int split_poly_area(struct POLY_FT4 *p, struct POLY_FT4 *bp, int offs, struct RECT *r, int sx, int sy, int correct)")
del_items(0x8014D460)
SetType(0x8014D460, "void rebuild_mdec_polys(int x, int y)")
del_items(0x8014D634)
SetType(0x8014D634, "void clear_mdec_frame()")
del_items(0x8014D640)
SetType(0x8014D640, "void draw_mdec_polys()")
del_items(0x8014D98C)
SetType(0x8014D98C, "void invalidate_mdec_frame()")
del_items(0x8014D9A0)
SetType(0x8014D9A0, "int is_frame_decoded()")
del_items(0x8014D9AC)
SetType(0x8014D9AC, "void init_mdec_polys(int x, int y, int w, int h, int bx1, int by1, int bx2, int by2, int correct)")
del_items(0x8014DD3C)
SetType(0x8014DD3C, "void set_mdec_poly_bright(int br)")
del_items(0x8014DDA4)
SetType(0x8014DDA4, "int init_mdec_stream(unsigned char *buftop, int sectors_per_frame, int mdec_frames_per_buffer)")
del_items(0x8014DDF4)
SetType(0x8014DDF4, "void init_mdec_audio(int rate)")
del_items(0x8014DEF8)
SetType(0x8014DEF8, "void kill_mdec_audio()")
del_items(0x8014DF28)
SetType(0x8014DF28, "void stop_mdec_audio()")
del_items(0x8014DF4C)
SetType(0x8014DF4C, "void play_mdec_audio(unsigned char *data, struct asec *h)")
del_items(0x8014E1F0)
SetType(0x8014E1F0, "void set_mdec_audio_volume(short vol, struct SpuVoiceAttr voice_attr)")
del_items(0x8014E2BC)
SetType(0x8014E2BC, "void resync_audio()")
del_items(0x8014E2E8)
SetType(0x8014E2E8, "void stop_mdec_stream()")
del_items(0x8014E334)
SetType(0x8014E334, "void dequeue_stream()")
del_items(0x8014E420)
SetType(0x8014E420, "void dequeue_animation()")
del_items(0x8014E5D0)
SetType(0x8014E5D0, "void decode_mdec_stream(int frames_elapsed)")
del_items(0x8014E7BC)
SetType(0x8014E7BC, "void play_mdec_stream(char *filename, int speed, int start, int end)")
del_items(0x8014E870)
SetType(0x8014E870, "void clear_mdec_queue()")
del_items(0x8014E89C)
SetType(0x8014E89C, "void StrClearVRAM()")
del_items(0x8014E95C)
SetType(0x8014E95C, "short PlayFMVOverLay(char *filename, int w, int h)")
del_items(0x8014EE20)
SetType(0x8014EE20, "unsigned short GetDown__C4CPad(struct CPad *this)")
