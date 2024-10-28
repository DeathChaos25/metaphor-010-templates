LittleEndian();

typedef struct
{
    bool UseMenu : 1 <name = "Usable Outside of Battle">;
    bool UseBattle : 1 <name = "Usable in Battle">;
    bool bit3 : 1;
    bool BackRowOnly : 1 <name = "Usable Only in Back Row">;
    byte : 1;
    byte : 1;
    byte : 1;
    byte : 1;
} SkillUseConditions;

typedef struct
{
    byte : 1;
    byte : 1;
    byte : 1;
    byte : 1;
    bool TargetSelf : 1 <name = "Self">;
    bool TargetAlly : 1 <name = "Ally (Alive)">;
    bool bit3 : 1;
    bool TargetAllyDead : 1 <name = "Ally (Dead)">;
} TargetCondition;

enum <byte> CostTypeEnum
{
    HP = 1,
    MP = 2,
    Money = 3
};

enum <byte> TargetCount
{
    SingleFoe = 0,
    AllFoes = 1
};

enum <byte> PassiveOrActive
{
    Active = 0,
    Passive = 1
};

enum <byte> SkillElement
{
    Slash = 0,
    Pierce = 1,
    Strike = 2,
    Fire,
    Ice,
    Electric,
    Wind,
    Light,
    Dark,
    Almighty
};

enum <byte> ApplyOrCure
{
    DummyApplyCure = 0,
    Apply = 1,
    Cure = 2
};

enum <byte> TargetSide
{
    DummyTarSide = 0,
    Target_Allies = 1,
    Target_Foes = 2
};

typedef struct
{
    bool Phys : 1 <name = "Physical Damage Skill">;
    bool Mag : 1 <name = "Magical Damage Skill">;
    byte : 1;
    byte : 1;
    byte : 1;
    byte : 1;
    byte : 1;
    byte : 1;
} PhysOrMagType;

typedef struct
{
    byte : 1;
    bool Protagonist : 1 <name = "Equippable by the Protagonist">;
    bool Strohl : 1 <name = "Equippable by Strohl">;
    bool Hulkenberg : 1 <name = "Equippable by Hulkenberg">;
    bool Heismay : 1 <name = "Equippable by Heismay">;
    bool Junah : 1 <name = "Equippable by Junah">;
    bool Eupha : 1 <name = "Equippable by Eupha">;
    bool Fidelio : 1 <name = "Equippable by Fidelio">;
    bool Basilio : 1 <name = "Equippable by Basilio">;
    bool Prince : 1 <name = "Equippable by Prince">;
    bool Grius : 1 <name = "Equippable by Grius">;
    bool Gallica : 1 <name = "Equippable by Gallica">;
    bool PX : 1 <name = "Equippable by PX">;
    bool Neuras : 1 <name = "Equippable by Neuras">;
    bool Rella : 1 <name = "Equippable by Rella">;
    bool Louis : 1 <name = "Equippable by Louis">;
    u16 RESERVE<format=hex>;
} EquippableUsers <name = "Equippable User(s)">;

typedef struct
{
  f32 X;
  f32 Y;
} Vec2<read=Str("%f - %f", X, Y)>;