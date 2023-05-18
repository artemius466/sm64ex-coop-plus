// 0x06005CB0
static const s16 moneybag_seg6_animvalue_06005CB0[] = {
    0x0000, 0x00E9, 0x00DE, 0x00D0, 0xFF1A, 0x3FFF, 0x3B84, 0x3FFF,
    0x56CC, 0x58BF, 0x5AD8, 0x0F8B, 0xFC25, 0xE93B, 0x0E14, 0xFA02,
    0xE77D, 0x8001, 0x8001, 0x56CC, 0x58BF, 0x5AD8,
};

// 0x06005CDC
static const u16 moneybag_seg6_animindex_06005CDC[] = {
    0x0001, 0x0000, 0x0003, 0x0001, 0x0001, 0x0004, 0x0001, 0x0005, 0x0001, 0x0006, 0x0001, 0x0007,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0003, 0x0013,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0012,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0003, 0x000B,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0011,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0003, 0x000E,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0003, 0x0008,
};

// 0x06005D3C
static const struct Animation moneybag_seg6_anim_06005D3C = {
    0,
    0,
    0,
    0,
    0x03,
    ANIMINDEX_NUMPARTS(moneybag_seg6_animindex_06005CDC),
    moneybag_seg6_animvalue_06005CB0,
    moneybag_seg6_animindex_06005CDC,
    0,
    ANIM_FIELD_LENGTH(moneybag_seg6_animvalue_06005CB0),
    ANIM_FIELD_LENGTH(moneybag_seg6_animindex_06005CDC),
};
