// 0x050099B8
static const s16 mad_piano_seg5_animvalue_050099B8[] = {
    0x0000, 0xFFEF, 0x0175, 0x00C4, 0xC001, 0x3FFF, 0x4077, 0xBF89,
};

// 0x050099C8
static const u16 mad_piano_seg5_animindex_050099C8[] = {
    0x0001, 0x0001, 0x0001, 0x0002, 0x0001, 0x0003, 0x0001, 0x0004, 0x0001, 0x0000, 0x0001, 0x0000,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0007,
    0x0001, 0x0005, 0x0001, 0x0000, 0x0001, 0x0006,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0000,
};

// 0x05009A04
static const struct Animation mad_piano_seg5_anim_05009A04 = {
    0,
    0,
    0,
    0,
    0x64,
    ANIMINDEX_NUMPARTS(mad_piano_seg5_animindex_050099C8),
    mad_piano_seg5_animvalue_050099B8,
    mad_piano_seg5_animindex_050099C8,
    0,
    ANIM_FIELD_LENGTH(mad_piano_seg5_animvalue_050099B8),
    ANIM_FIELD_LENGTH(mad_piano_seg5_animindex_050099C8),
};
