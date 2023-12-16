#ifndef __SOUND_EVENT_H__
#define __SOUND_EVENT_H__

#include <net/library/types.hpp>
#include <net/library/basic_string.hpp>

namespace link {
    static const uint32_t getName__10SoundEventCFv = 0x028E11EC;
}

class SoundEvent {
public:

    static SoundEvent *block_chest_open asm("0x109C28");
    static SoundEvent *block_chest_open asm("0x109C28");
    static SoundEvent *random_successful_hit asm("0x9C61AC");
    static SoundEvent *item_trident_thunder asm("");
    static SoundEvent *MG01_gamestart asm("");
    static SoundEvent *note_bassattack asm("0x19C65A0");
    static SoundEvent *note_bd asm("0x10959C");
    static SoundEvent *note_harp asm("");
    static SoundEvent *note_hat asm("0x109CA8");
    static SoundEvent *note_pling asm("0x1065AC");
    static SoundEvent *note_snare asm("0x1095B0");
    static SoundEvent *note_bell asm("0x109C90");
    static SoundEvent *note_chime asm("0x106A94");
    static SoundEvent *note_flute asm("0x106A98");
    static SoundEvent *note_guitar asm("");
    static SoundEvent *note_xylophone asm("0x106A8C");
    static SoundEvent *random_anvil_land asm("0x75C6FC");
    static SoundEvent *note_bone asm("0x109C8C")
    static SoundEvent *note_gold asm("0x109C60")
    static SoundEvent *
    static SoundEvent *
    static SoundEvent *
    static SoundEvent *
    static SoundEvent *
    static SoundEvent *
    static SoundEvent *
    static SoundEvent *
    static SoundEvent *
    static SoundEvent *
    static SoundEvent *
    static SoundEvent *
    static SoundEvent *
    static SoundEvent *
    static SoundEvent *
    static SoundEvent *
    static SoundEvent *
    static SoundEvent *
    static SoundEvent *
    static SoundEvent *
    static SoundEvent *
    static SoundEvent *
    static SoundEvent *

    std::basic_string<wchar_t> getName() {
        std::basic_string<wchar_t> name;
        ((void(*)(SoundEvent*, std::basic_string<wchar_t>*))link::getName__10SoundEventCFv)
        (this, &name);
        return name;
    }

};

#endif