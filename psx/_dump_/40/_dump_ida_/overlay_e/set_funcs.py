del_items(0x801518E4)
SetType(0x801518E4, "void _cd_seek(int sec)")
del_items(0x8015191C)
SetType(0x8015191C, "void init_cdstream(int chunksize, unsigned char *buf, int bufsize)")
del_items(0x80151944)
SetType(0x80151944, "void flush_cdstream()")
del_items(0x80151998)
SetType(0x80151998, "void reset_cdstream()")
del_items(0x801519C8)
SetType(0x801519C8, "void kill_stream_handlers()")
del_items(0x801519F8)
SetType(0x801519F8, "void stream_cdready_handler(unsigned char status, unsigned char *result, int idx, int i, int sec, struct CdlLOC subcode[3], unsigned long OldGp)")
del_items(0x80151C4C)
SetType(0x80151C4C, "void install_stream_handlers()")
del_items(0x80151C88)
SetType(0x80151C88, "void cdstream_service()")
del_items(0x80151D78)
SetType(0x80151D78, "int cdstream_get_chunk(unsigned char **data, struct strheader **h)")
del_items(0x80151E90)
SetType(0x80151E90, "int cdstream_is_last_chunk()")
del_items(0x80151EA8)
SetType(0x80151EA8, "void cdstream_discard_chunk()")
del_items(0x80151FC8)
SetType(0x80151FC8, "void close_cdstream()")
del_items(0x80152008)
SetType(0x80152008, "void wait_cdstream()")
del_items(0x801520C0)
SetType(0x801520C0, "int open_cdstream(char *fname, int secoffs, int seclen)")
del_items(0x801521E8)
SetType(0x801521E8, "int set_mdec_img_buffer(unsigned char *p)")
del_items(0x8015221C)
SetType(0x8015221C, "void start_mdec_decode(unsigned char *data, int x, int y, int w, int h)")
del_items(0x80152378)
SetType(0x80152378, "void DCT_out_handler()")
del_items(0x80152428)
SetType(0x80152428, "void init_mdec(unsigned char *vlc_buffer, unsigned char *vlc_table)")
del_items(0x80152498)
SetType(0x80152498, "void init_mdec_buffer(char *buf, int size)")
del_items(0x801524B4)
SetType(0x801524B4, "int split_poly_area(struct POLY_FT4 *p, struct POLY_FT4 *bp, int offs, struct RECT *r, int sx, int sy, int correct)")
del_items(0x801528A4)
SetType(0x801528A4, "void rebuild_mdec_polys(int x, int y)")
del_items(0x80152A78)
SetType(0x80152A78, "void clear_mdec_frame()")
del_items(0x80152A84)
SetType(0x80152A84, "void draw_mdec_polys(int bright)")
del_items(0x80152DFC)
SetType(0x80152DFC, "void invalidate_mdec_frame()")
del_items(0x80152E10)
SetType(0x80152E10, "int is_frame_decoded()")
del_items(0x80152E1C)
SetType(0x80152E1C, "void init_mdec_polys(int x, int y, int w, int h, int bx1, int by1, int bx2, int by2, int correct)")
del_items(0x801531AC)
SetType(0x801531AC, "void set_mdec_poly_bright(int br)")
del_items(0x80153214)
SetType(0x80153214, "int init_mdec_stream(unsigned char *buftop, int sectors_per_frame, int mdec_frames_per_buffer)")
del_items(0x80153264)
SetType(0x80153264, "void init_mdec_audio(int rate)")
del_items(0x8015337C)
SetType(0x8015337C, "void kill_mdec_audio()")
del_items(0x801533AC)
SetType(0x801533AC, "void stop_mdec_audio()")
del_items(0x801533D0)
SetType(0x801533D0, "void play_mdec_audio(unsigned char *data, struct asec *h)")
del_items(0x80153704)
SetType(0x80153704, "void set_mdec_audio_volume(short vol, struct SpuVoiceAttr voice_attr)")
del_items(0x801537D0)
SetType(0x801537D0, "void resync_audio()")
del_items(0x801537E0)
SetType(0x801537E0, "void stop_mdec_stream()")
del_items(0x80153824)
SetType(0x80153824, "void dequeue_stream()")
del_items(0x80153910)
SetType(0x80153910, "void dequeue_animation()")
del_items(0x80153AC0)
SetType(0x80153AC0, "void decode_mdec_stream(int frames_elapsed)")
del_items(0x80153CA0)
SetType(0x80153CA0, "void play_mdec_stream(char *filename, int speed, int start, int end)")
del_items(0x80153D3C)
SetType(0x80153D3C, "void clear_mdec_queue()")
del_items(0x80153D68)
SetType(0x80153D68, "void StrClearVRAM()")
del_items(0x80153E28)
SetType(0x80153E28, "short PlayFMVOverLay(char *filename, int w, int h)")
del_items(0x80153EB0)
SetType(0x80153EB0, "void LoPlayFMVOverLay()")
del_items(0x80154310)
SetType(0x80154310, "unsigned short GetDown__C4CPad(struct CPad *this)")
