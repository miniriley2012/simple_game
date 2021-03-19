//
// Created by Mike Quinn on 3/16/21.
//

#ifndef SIMPLE_GAME_WEAPON_H
#define SIMPLE_GAME_WEAPON_H

#include <iostream>

enum class WeaponEnum {
    Fist,
    Bat,
    Slap,
    Sword,
    Bow,
    Gun,
    _end,
    Unknown,
};

class Weapon {
public:
    int damagePoints = 0;
    int durability = 100;
    WeaponEnum type;

    Weapon();

    std::string name() const;
};

class Fist : public Weapon {
public:
    Fist();
};

class Bat : public Weapon {
public:
    Bat();
};

class Slap : public Weapon {
public:
    Slap();
};

class Gun : public Weapon {
public:
    Gun();
};

class Sword : public Weapon {
public:
    Sword();
};

class Bow : public Weapon {
public:
    Bow();
};

constexpr std::string_view weapon_str(WeaponEnum weapon) {
    switch (weapon) {
        case WeaponEnum::Fist:
            return "fist";
        case WeaponEnum::Bat:
            return "bat";
        case WeaponEnum::Slap:
            return "slap";
        case WeaponEnum::Sword:
            return "sword";
        case WeaponEnum::Bow:
            return "bow";
        case WeaponEnum::Gun:
            return "gun";
        default:
            return "unknown";
    }
}

WeaponEnum weapon_from_str(std::string_view str);

#endif //SIMPLE_GAME_WEAPON_H
