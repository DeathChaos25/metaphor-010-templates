LittleEndian();

typedef struct
{
    u8 Strength;
    u8 Magic;
    u8 Endurance;
    u8 Agility;
    u8 Luck;
    u8 Stat_RESERVE;
} Unit_Stats;

typedef struct
{
    bool bit01 : 1;
    bool bit02 : 1;
    bool bit03 : 1;
    bool bit04 : 1;
    bool bit05 : 1;
    bool bit06 : 1;
    bool bit07 : 1;
    bool bit08 : 1;
    bool bit09 : 1;
    bool bit10 : 1;
    bool bit11 : 1;
    bool bit12 : 1;
    bool bit13 : 1;
    bool bit14 : 1;
    bool bit15 : 1;
    bool bit16 : 1;
} EnemyTBLUnitFlags;

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
    Single = 0,
    AllFoes = 1,
	AllEnemiesAllies = 2,
	OneRow = 4,
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

typedef struct
{
    u8 Multiplier <name = "Multiplier (in increments of 5%)", comment = "Multiplies damage & ailment chance. 20 is Neutral since 20 x 5% = 100% of normal dmg & ail. chance. 80 x 5% = 400% = 4x multiplier. 0 is ignored (does not nullify attack).">;
    u8 Block : 1;
    u8 Repel : 1;
    u8 Drain : 1;
    u8 Weak : 1 ;
    u8 Resist : 1 <comment = "Displays Resist text and halves damage (by default) when hit. (However, If Multiplier field is specified (non-zero), it replaces the default 0.5x multiplier.)">;
    u8 Ailment_Immune : 1 <name = "Ailment Immune", comment = "Incoming attacks never inflict ailments (including insta-kill). Overrides Guarantee Ailment. Does NOT prevent Critical hits.">;
    u8 Guarantee_Ailment : 1 <name = "Guarantee Ailment", comment = "Incoming attacks with an ailment chance always inflict the ailment.">;
    u8 Double_Ailment_Chance : 1 <name = "Double Ailment Chance", comment = "Used on Fire/Ice/Elec affinity to double the chance that an incoming attack inflicts the corresponding ailment (Burn/Freeze/Shock).">;
} AffinityBitfield <read=Str( "Damage Taken: %03d", Multiplier * 5 )>;


typedef struct
{
    SkillElement AttackAttribute;
    u8 Accuracy;
    u16 Attack;
    u16 Defense;
    u16 Evasion;
} EnemyAtkProperty;

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