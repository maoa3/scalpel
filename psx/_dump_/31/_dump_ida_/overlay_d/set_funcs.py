del_items(0x8014A180)
SetType(0x8014A180, "void EA_cd_seek(int secnum)")
del_items(0x8014A188)
SetType(0x8014A188, "void MY_CdGetSector(unsigned long *src, unsigned long *dst, int size)")
del_items(0x8014A1BC)
SetType(0x8014A1BC, "void init_cdstream(int chunksize, unsigned char *buf, int bufsize)")
del_items(0x8014A1CC)
SetType(0x8014A1CC, "void flush_cdstream()")
del_items(0x8014A1F0)
SetType(0x8014A1F0, "int check_complete_frame(struct strheader *h)")
del_items(0x8014A270)
SetType(0x8014A270, "void reset_cdstream()")
del_items(0x8014A298)
SetType(0x8014A298, "void kill_stream_handlers()")
del_items(0x8014A2F8)
SetType(0x8014A2F8, "void stream_cdready_handler(unsigned long *addr, int idx, int i, int sec)")
del_items(0x8014A4EC)
SetType(0x8014A4EC, "void CD_stream_handler(struct TASK *T)")
del_items(0x8014A5CC)
SetType(0x8014A5CC, "void install_stream_handlers()")
del_items(0x8014A63C)
SetType(0x8014A63C, "void cdstream_service()")
del_items(0x8014A6D4)
SetType(0x8014A6D4, "int cdstream_get_chunk(unsigned char **data, struct strheader **h)")
del_items(0x8014A7F8)
SetType(0x8014A7F8, "int cdstream_is_last_chunk()")
del_items(0x8014A810)
SetType(0x8014A810, "void cdstream_discard_chunk()")
del_items(0x8014A910)
SetType(0x8014A910, "void close_cdstream()")
del_items(0x8014A988)
SetType(0x8014A988, "int open_cdstream(char *fname, int secoffs, int seclen)")
del_items(0x8014AB20)
SetType(0x8014AB20, "int set_mdec_img_buffer(unsigned char *p)")
del_items(0x8014AB54)
SetType(0x8014AB54, "void start_mdec_decode(unsigned char *data, int x, int y, int w, int h)")
del_items(0x8014ACD8)
SetType(0x8014ACD8, "void DCT_out_handler()")
del_items(0x8014AD74)
SetType(0x8014AD74, "void init_mdec(unsigned char *vlc_buffer, unsigned char *vlc_table)")
del_items(0x8014ADE4)
SetType(0x8014ADE4, "void init_mdec_buffer(char *buf, int size)")
del_items(0x8014AE00)
SetType(0x8014AE00, "int split_poly_area(struct POLY_FT4 *p, struct POLY_FT4 *bp, int offs, struct RECT *r, int sx, int sy, int correct)")
del_items(0x8014B1F0)
SetType(0x8014B1F0, "void rebuild_mdec_polys(int x, int y)")
del_items(0x8014B3C4)
SetType(0x8014B3C4, "void clear_mdec_frame()")
del_items(0x8014B3D0)
SetType(0x8014B3D0, "void draw_mdec_polys()")
del_items(0x8014B71C)
SetType(0x8014B71C, "void invalidate_mdec_frame()")
del_items(0x8014B730)
SetType(0x8014B730, "int is_frame_decoded()")
del_items(0x8014B73C)
SetType(0x8014B73C, "void init_mdec_polys(int x, int y, int w, int h, int bx1, int by1, int bx2, int by2, int correct)")
del_items(0x8014BACC)
SetType(0x8014BACC, "void set_mdec_poly_bright(int br)")
del_items(0x8014BB34)
SetType(0x8014BB34, "int init_mdec_stream(unsigned char *buftop, int sectors_per_frame, int mdec_frames_per_buffer)")
del_items(0x8014BB84)
SetType(0x8014BB84, "void init_mdec_audio(int rate)")
del_items(0x8014BC3C)
SetType(0x8014BC3C, "void kill_mdec_audio()")
del_items(0x8014BC6C)
SetType(0x8014BC6C, "void stop_mdec_audio()")
del_items(0x8014BC90)
SetType(0x8014BC90, "void play_mdec_audio(unsigned char *data, struct asec *h)")
del_items(0x8014BF2C)
SetType(0x8014BF2C, "void set_mdec_audio_volume(short vol, struct SpuVoiceAttr voice_attr)")
del_items(0x8014BFF8)
SetType(0x8014BFF8, "void resync_audio()")
del_items(0x8014C028)
SetType(0x8014C028, "void stop_mdec_stream()")
del_items(0x8014C074)
SetType(0x8014C074, "void dequeue_stream()")
del_items(0x8014C160)
SetType(0x8014C160, "void dequeue_animation()")
del_items(0x8014C310)
SetType(0x8014C310, "void decode_mdec_stream(int frames_elapsed)")
del_items(0x8014C4FC)
SetType(0x8014C4FC, "void play_mdec_stream(char *filename, int speed, int start, int end)")
del_items(0x8014C5B0)
SetType(0x8014C5B0, "void clear_mdec_queue()")
del_items(0x8014C5DC)
SetType(0x8014C5DC, "void StrClearVRAM()")
del_items(0x8014C69C)
SetType(0x8014C69C, "short PlayFMVOverLay(char *filename, int w, int h)")
del_items(0x8014CAA4)
SetType(0x8014CAA4, "unsigned short GetDown__C4CPad(struct CPad *this)")
