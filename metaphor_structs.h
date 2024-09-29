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