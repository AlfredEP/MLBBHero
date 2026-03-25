#include <iostream>
//#include <vector>
#include <string>
#include <map>
//#include <unordered_map>
#include <algorithm>
#include <cctype>

using namespace std;

struct HeroData
{
    string name, role, passive, skill1, skill2, ultimate;
};

struct HeroData4Skill
{
    string name, role, passive, skill1, skill2, skill3, ultimate;
};

struct HeroDataDualForm
{
    string name, role, passive, mode1, mode2, skill1mode1, skill2mode1, ultimode1, skill1mode2, skill2mode2, ultimode2;
};

struct HeroDataNoUlti
{
    string name, role, passive, skill1, skill2, skill3, enchancedSkill1, enchancedSkill2, enchancedSkill3;
};

struct HeroDataSpecialSkill
{
    string name, role, passive, skill1, skill2, ultimate, specialSkill;
    //int baseHP;
};

struct HeroDataMultiWeapon
{
    string name, role, passive, weapon1, weapon2, weapon3, weapon4, skill1, skill2, ulti1, ulti2, ulti3, ulti4, specialSkill;
};

// Function to initialize all hero data maps
void initializeHeroData(
    map<string, HeroData>& heroData,
    map<string, HeroData4Skill>& heroData4Skill,
    map<string, HeroDataDualForm>& heroDataDualForm,
    map<string, HeroDataNoUlti>& heroDataNoUlti,
    map<string, HeroDataSpecialSkill>& heroDataSpecialSkill,
    map<string, HeroDataMultiWeapon>& heroDataMultiWeapon
) {
    //map<string, HeroData> heroData;
    heroData["aamon"] = HeroData{"Aamon", "Assasin", "Invisible Armor", "Soul Shards", "Slayer Shards", "Endless Shards"};
    heroData["akai"] = HeroData{"Akai", "Tank", "Tai Chi", "Headbutt", "Body Slam", "Heavy Spin"};
    heroData["aldous"] = HeroData{"Aldous", "Fighter", "Contract: Transform", "Contract: Soul Steal", "Contract: Explosion", "Contract: Chase Fate"};
    heroData["alice"] = HeroData{"Alice", "Mage/Tank", "Blood Ancestry", "Flowing Blood", "Blood Awe", "Blood Ode"};
    heroData["alpha"] = HeroData{"Alpha", "Fighter", "Beta, Advance!", "Rotary Impact", "Force Swing", "Spear of Alpha"};
    heroData["alucard"] = HeroData{"Alucard", "Fighter/Assassin", "Pursuit", "Groundsplitter", "Whirling Smash", "Fission Wave"};
    heroData["angela"] = HeroData{"Angela", "Support", "Smart Heart", "Love Waves", "Puppet-on-a-String", "Heart Guard"};
    heroData["argus"] = HeroData{"Argus", "Fighter", "Warmonger", "Demonic Grip", "Meteroic Sword", "Eternal Evil"};
    heroData["arlott"] = HeroData{"Arlott", "Fighter/Assassin", "Demon Gaze", "Dauntless Strike", "Vengeance", "Final Slash"};
    heroData["atlas"] = HeroData{"Atlas", "Tank", "Frigid Breath", "Annihilate", "Perfect Match", "Fatal Links"};
    heroData["aulus"] = HeroData{"Aulus", "Fighter", "Fighting Spirit", "Aulus, Charge!", "The Power of Axe", "Undying Fury"};
    heroData["aurora"] = HeroData{"Aurora", "Mage", "Pride of Ice", "Hailstone Blast", "Frosty Breeze", "Frigid Glacier"};
    heroData["badang"] = HeroData{"Badang", "Fighter", "Chivalry Fist", "Fist Wind", "Fist Break", "Fist Crack"};
    heroData["balmond"] = HeroData{"Balmond", "Fighter", "Bloodthirst", "Soul Lock", "Cyclone Sweep", "Lethal Counter"};
    heroData["bane"] = HeroData{"Bane", "Fighter/Mage", "Shark Bite", "Crab Claw Canon", "Ale", "Deadly Catch"};
    heroData["barats"] = HeroData{"Barats", "Tank/Fighter", "Big Guy", "So-Called Teamwork", "Missile \"Expert\"", "Detona's Welcome"};
    heroData["baxia"] = HeroData{"Baxia", "Tank", "Baxia Mark", "Baxia-Shield Unity", "Shield of Spirit", "Tortoise's Puissance"};
    heroData["belerick"] = HeroData{"Belerick", "Tank", "Deadly Thorns", "Ancient Seed", "Nature's Strike", "Wrath of Dryad"};
    heroData["benedetta"] = HeroData{"Benedetta", "Assassin/Fighter", "Elapsed Daytime", "Phantom Slash", "An Eye for An Eye", "Alecto: Final Blow"};
    heroData["brody"] = HeroData{"Brody", "Marksman", "Abyss Corrosion", "Abyss Impact", "Corrosive Strike", "Tom-Apart Memory"};
    heroData["bruno"] = HeroData{"Bruno", "Marksman", "Mecha Legs", "Volley Shot", "Flying Tackle", "Worldie"};
    heroData["carmilla"] = HeroData{"Carmilla", "Support/Tank", "Vampire Pact", "Crimson Flower", "Bloodbath", "Curse of Blood"};
    heroData["chang'e"] = HeroData{"Chang'e", "Mage", "Trouble Maker", "Starmoon Shockwave", "Crescent Moon", "Meteor Shower"};
    heroData["chou"] = HeroData{"Chou", "Fighter", "Only Fast", "Jeet Kune Do", "Shunpo", "The Way of Dragon"};
    heroData["cici"] = HeroData{"Cici", "Fighter", "Performer's Delight", "Yo-Yo Blitz", "Buoyant Bounce", "Curtain Call"};
    heroData["claude"] = HeroData{"Claude", "Marksman", "Battle Side-by-side", "Art of Thievery", "Battle Mirror Image", "Blazing Duet"};
    heroData["clint"] = HeroData{"Clint", "Marksman", "Double Shot", "Quick Draw", "Trapping Recoil", "Grenade Bombardment"};
    heroData["cyclops"] = HeroData{"Cyclops", "Mage", "Starlit Hourglass", "Stardust Shock", "Planets Attack", "Star Power Lockdown"};
    heroData["diggie"] = HeroData{"Diggie", "Support", "Young Again", "Auto Alarm Bomb", "Reverse Time", "Time Journey"};
    heroData["dyrroth"] = HeroData{"Dyrroth", "Fighter", "Wrath of the Abyss", "Burst Strike", "Spectre Step", "Abysm Strike"};
    heroData["esmeralda"] = HeroData{"Esmeralda", "Tank/Mage", "Starmoon Casket", "Frostmoon Shield", "Stardust Dance", "Falling Starmoon"};
    heroData["estes"] = HeroData{"Estes", "Support", "Scripture of the Moon Elf", "Moonlight Immersion", "Domain of Moon Gooddess", "Blessing of Moon Goddess"};
    heroData["eudora"] = HeroData{"Eudora", "Mage", "Superconductor", "Forked Lightning", "Ball Lightning", "Thunder's Wrath"};
    heroData["fanny"] = HeroData{"Fanny", "Assassin", "Air Superiority", "Tornado Strike", "Steel Cable", "Cut Throat"};
    heroData["faramis"] = HeroData{"Faramis", "Support/Mage", "Vicious Retreival", "Shadow Stampede", "Ghost Bursters", "Nether Realm"};
    heroData["floryn"] = HeroData{"Floryn", "Support", "Dew", "Sow", "Sprout", "Bloom"};
    heroData["franco"] = HeroData{"Franco", "Tank", "Wasteland Force", "Iron Hook", "Fury Shock", "Bloody Hunt"};
    heroData["freya"] = HeroData{"Freya", "Fighter", "Power of Einherjar", "Leap of Faith", "Spirit Combo", "Valkyrie Descent"};
    heroData["gatotkaca"] = HeroData{"Gatotkaca", "Tank/Fighter", "Steel Bones", "Blast Iron Fist", "Unbreakable", "Avatar of the Guardian"};
    heroData["gloo"] = HeroData{"Gloo", "Tank", "Stick, Stick", "Stam, Stam", "Spread, Spread", "Grab, Grab"};
    heroData["gord"] = HeroData{"Gord", "Mage", "Mystic Favor", "Mystic Projectile", "Mystic Injunction", "Mystic Gush"};
    heroData["granger"] = HeroData{"Granger", "Marksman", "Capriccio", "Rhapsody", "Rondo", "Death Sonata"};
    heroData["grock"] = HeroData{"Grock", "Tank/Fighter", "Earthen Force", "Power of Nature", "Guardian's Barrier", "Wild Charge"};
    heroData["guinevere"] = HeroData{"Guinevere", "Fighter", "Super Magic", "Energy Wave", "Spatial Migration", "Violet Requiem"};
    heroData["gusion"] = HeroData{"Gusion", "Assassin", "Dagger Specialist", "Sword Spike", "Shadowblade Slaughter", "Incandescence"};
    heroData["hanabi"] = HeroData{"Hanabi", "Marksman", "Ninjutsu: Petal Barrage", "Ninjutsu: Equinox", "Ninjutsu: Soul Scroll", "Forbidden Jutsu: Higanbana"};
    heroData["harith"] = HeroData{"Harith", "Mage", "Key Insight", "Synchro Fission", "Chrono Dash", "Zaman Force"};
    heroData["harley"] = HeroData{"Harley", "Assassin/Mage", "Magic Master", "Poker Trick", "Space Escape", "Deadly Magic"};
    heroData["hayabusa"] = HeroData{"Hayabusa", "Assassin", "Ninjutsu: Trace of Shadow", "Ninjutsu: Phantom Shuriken", "Ninjutsu: Quad Shadow", "Ougi: Shadow Kill"};
    heroData["helcurt"] = HeroData{"Helcurt", "Assassin", "Shadow of Styx", "Hidden Terror", "Deadly Stinger", "Dark Night Falls"};
    heroData["hilda"] = HeroData{"Hilda", "Fighter/Tank", "Blessing of Wilderness", "Combat Ritual", "Art of Hunting", "Power of Wildness"};
    heroData["hylos"] = HeroData{"Hylos", "Tank", "Thickened Blood", "Law and Order", "Ring of Punishment", "Glorious Path"};
    heroData["irithel"] = HeroData{"Irithel", "Marksman", "Jungle Heart", "Strafe", "Force of The Queen", "Heavy Crossbow"};
    heroData["ixia"] = HeroData{"Ixia", "Marksman", "Siphon Starlium", "Dual Beam", "Star Helix", "Full Barrage"};
    heroData["jawhead"] = HeroData{"Jawhead", "Fighter", "Mecha Suppression", "Smart Missiles", "Ejector", "Unstoppable Force"};
    heroData["johnson"] = HeroData{"Johnson", "Tank/Support", "Electro Airbag", "Impact Wrench", "Electromagnetic Waves", "Full Throttle"};
    heroData["joy"] = HeroData{"Joy", "Assassin", "Humph, Joy's Angry!", "Look, Leonin Crystal!", "Meow, Rythm of Joy!", "Ha, Electrifying Beats!"};
    heroData["kadita"] = HeroData{"Kadita", "Mage/Assassin", "Thalassophobia", "Ocean Ode", "Breath of the Ocean", "Rough Waves"};
    heroData["kaja"] = HeroData{"Kaja", "Support/Fighter", "Wrath Sanction", "Ring of Order", "Lightning Bomb", "Divine Judgment"};
    heroData["kalea"] = HeroData{"Kalea", "Support/Fighter", "Surge of Life", "Wavebreaker", "Tidal Strike", "Tsunami Slam"};
    heroData["karina"] = HeroData{"Karina", "Assassin", "Shadow Combo", "Dance of Blades", "Dance of Death", "Shadow Assault"};
    heroData["karrie"] = HeroData{"Karrie", "Marksman", "Lightwheel Mark", "Spinning Lightwheel", "Phantom Step", "Speedy Lightwheel"};
    heroData["khaleed"] = HeroData{"Khaleed", "Fighter", "Sand Walk", "Desert Tornado", "Quicksand Guard", "Raging Sandstorm"};
    heroData["khufra"] = HeroData{"Khufra", "Tank", "Spell Curse", "Tyrant's Revenge", "Bouncing Ball", "Tyrant's Rage"};
    heroData["kimmy"] = HeroData{"Kimmy", "Marksman/Mage", "Aerial Dominance", "Anti-Grav Thruster", "Starlium Beam", "Traction Pulse"};
    heroData["lancelot"] = HeroData{"Lancelot", "Assassin", "Soul Cutter", "Puncture", "Thorned Rose", "Phantom Execution"};
    heroData["layla"] = HeroData{"Layla", "Marksman", "Malefic Gun", "Malefic Bomb", "Void Projectile", "Destruction Rush"};
    heroData["lesley"] = HeroData{"Lesley", "Marksman/Assassin", "Lethal Shot", "Master of Camouflage", "tactical Grenade", "Ultimate Snipe"};
    heroData["ling"] = HeroData{"Ling", "Assassin", "Cloud Walker", "Finch Poise", "Defiant Sword", "Tempest of Blades"};
    heroData["lolita"] = HeroData{"Lolita", "Support/Tank", "Noumenon Energy Core", "Power Charge", "Guardian's Reflection", "Neumenon Blast"};
    heroData["luo yi"] = HeroData{"Luo Yi", "Mage", "Duality", "Dispersion", "Rotation", "Diversion"};
    heroData["lylia"] = HeroData{"Lylia", "Mage", "Angry Gloom", "Magic Shockwave", "Shadow Energy", "Black Shoes"};
    heroData["marcel"] = HeroData{"Marcel", "Support", "Platinum Snap", "Frame Moment", "Tracking Shot", "Golden Hour"};
    heroData["martis"] = HeroData{"Martis", "Fighter", "Aura's Wrath", "Asura Aura", "Mortal Coil", "Decimation"};
    heroData["mathilda"] = HeroData{"Mathilda", "Support/Assassin", "Ancestral Guidance", "Soul Bloom", "Guiding Wind", "Circling Eagle"};
    heroData["melissa"] = HeroData{"Melissa", "Marksman", "Doll Buster", "Falling!", "Eyes on You!", "Go Away!"};
    heroData["minotaur"] = HeroData{"Minotaur", "Tank/Support", "Rage Incarnate", "Despair Stomp", "Motivation Roar", "Minoan Fury"};
    heroData["minsitthar"] = HeroData{"Minsitthar", "Fighter", "Mark of the King", "Spear of Glory", "Shield Assault", "King's Calling"};
    heroData["miya"] = HeroData{"Miya", "Marksman", "Moon Blessing", "Moon Arow", "Arrow of Eclipse", "Hidden Moonlight"};
    heroData["moskov"] = HeroData{"Moskov", "Marksman", "Spear of Quiescence", "Abyss Walker", "Spear of Misery", "Spear of Destruction"};
    heroData["nana"] = HeroData{"Nana", "Mage", "Molina's Gift", "Magic Boomerang", "Molina Smooch", "Molina Blitz"};
    heroData["natalia"] = HeroData{"Natalia", "Assassin", "Assassin Instinct", "Claw Dash", "Smoke Bomb", "The Hunt"};
    heroData["natan"] = HeroData{"Natan", "Marksman", "Theory of Everything", "Superposition", "Interference!", "Entropy?"};
    heroData["nolan"] = HeroData{"Nolan", "Assassin", "Dimensional Rift", "Expansion", "Gauge", "Fracture"};
    heroData["novaria"] = HeroData{"Novaria", "Mage", "Star Trail", "Astral Meteor", "Astral Recall", "Astral Echo"};
    heroData["obsidia"] = HeroData{"Obsidia", "Marksman", "Return to Bone", "Abyssal Bone Needle", "Phantom Shadowmeld", "Hunt of Bone"};
    heroData["odette"] = HeroData{"Odette", "Mage", "Lakeshore Ambience", "Avian Authority", "Blue Nova", "Swan Song"};
    heroData["paquito"] = HeroData{"Paquito", "Fighter/Assassin", "Champ Stance", "Heavy Left Punch", "Jab", "Knockout Strike"};
    heroData["phoveus"] = HeroData{"Phoveus", "Fighter", "Demonic Force", "Demonic Impact", "Dark Wave", "Infernal Pursuit"};
    heroData["rafaela"] = HeroData{"Rafaela", "Support", "Divine Rescurrection", "Light of Retribution", "Holy Healing", "Holy Baptism"};
    heroData["ruby"] = HeroData{"Ruby", "Fighter", "Let's Dance!", "Be Good!", "Don't Run, Wolf King!", "I'm Offended!"};
    heroData["saber"] = HeroData{"Saber", "Assassin", "Enemy's Bane", "Orbitting Swords", "Charge", "Triple Sweep"};
    heroData["silvanna"] = HeroData{"Silvanna", "Fighter", "Knightless Resolve", "Cosmetic Lance", "Spiral Strangling", "Imperial Justice"};
    heroData["sora"] = HeroData{"Sora", "Fighter/Assassin", "Mystic Surge", "Sundering Strike", "Windstride", "Shifting Skies"};
    heroData["terizla"] = HeroData{"Terizla", "Fighter/Tank", "Body of Smith", "Revenge Strike", "Execution Strike", "Penalty Zone"};
    heroData["thamuz"] = HeroData{"Thamuz", "Fighter", "Grand Lord Lava", "Molten Scythes", "Chasm Trample", "Cauterant Inferno"};
    heroData["tigreal"] = HeroData{"Tigreal", "tank", "Fearless", "Attack WAave", "Sacred Hammer", "Implosion"};
    heroData["uranus"] = HeroData{"Uranus", "Tank", "Radiance", "Ionic Edge", "Transcendent Ward", "Consecration"};
    heroData["vale"] = HeroData{"Vale", "Mage", "Windtalk", "Wind Blade", "Windblow", "Windstorm"};
    heroData["valentina"] = HeroData{"Valentina", "Mage", "Primal Force", "Shadow Strike", "Arcane Shade", "I Am You"};
    heroData["valir"] = HeroData{"Valir", "Mage", "Ashing", "Burst Fireball", "Searing Torrent", "Vengeance Flame"};
    heroData["vexana"] = HeroData{"Vexana", "Mage", "Nether Touch", "Deadly Grasp", "Cursed Blast", "Eternal Guard"};
    heroData["wanwan"] = HeroData{"Wanwan", "Marksman", "Tiger Pace", "Swallow's Path", "Needles in Flowers", "Crossbow of Tang"};
    heroData["xavier"] = HeroData{"Xavier", "Mage", "Trascendence", "Infinite Extension", "Mystic Field", "Dawning Light"};
    heroData["x.borg"] = HeroData{"X.Borg", "Fighter", "Firaga Armor", "Fire Missiles", "Fire Stake", "Last Insanity"};
    heroData["yi sun-shin"] = HeroData{"Yi Sun-shin", "Assassin/Marksman", "Heavenly Vow", "Traceless", "Blood Floods", "Mountain Shocker"};
    heroData["yve"] = HeroData{"Yve", "Mage", "Galactic Power", "Void Blast", "Void Crystal", "Real World Manipulation"};
    heroData["zetian"] = HeroData{"Zetian", "Mage", "Celestial Armament", "Phoenix Strike", "Phoenix Descent", "Fury of the Phoenix"};
    heroData["zhuxin"] = HeroData{"Zhuxin", "Mage", "Crimson Butterflies", "Fluttering Grace", "Lantern Flare", "Crimson Beacon"};
    heroData["zilong"] = HeroData{"Zilong", "Fighter/Assassin", "Dragon Flurry", "Spear Flip", "Spear Strike", "Supreme Warrior"};

    //map<string, HeroData4Skill> heroData4Skill;
    heroData4Skill["fredrinn"] = HeroData4Skill{"Fredrinn", "Fighter/Tank", "Crystalline Armor", "Piercing Strike", "Brave Assault", "Energy Eruption", "Appraiser's Wrath"};
    heroData4Skill["lunox"] = HeroData4Skill{"Lunox", "Mage", "Dreamland Twist", "Starlight Pulse", "Chaos Assault", "Cosmic Fission", "Order & Chaos"};
    heroData4Skill["popol and kupa"] = HeroData4Skill{"Popol and Kupa", "Marksman", "We Are Friends", "Bite 'em, Kupa!", "Kupa, Help!", "Popol's Surprise", "We Are Angry"};
    heroData4Skill["yu zhong"] = HeroData4Skill{"Yu Zhong", "Fighter", "Cursing Touch", "Dragon Tail", "Soul Grip", "Furious Dive", "Black Dragon Form"};
    heroData4Skill["zhask"] = HeroData4Skill{"Zhask", "Mage", "Decimation", "Nightmaric Spawn", "Mind Eater", "Hive Clones", "Dominator's Descent"};

    //map<string, HeroDataDualForm> heroDataDualForm;
    heroDataDualForm["edith"] = HeroDataDualForm{"Edith", "Tank/Marksman", "Overload", "none", "Ejected from Phylax", "Earth Shatter", "Onward", "Primal Wrath", "Divine Retribution", "Lightning Bolt", "Primal Wrath"};
    heroDataDualForm["hanzo"] = HeroDataDualForm{"Hanzo", "Assassin", "Ame no Habakiri", "none", "Hanekage", "Ninjutsu: Demon Feast", "Ninjutsu: Dark Mist", "Kinjutsu: Pinnacle Ninja", "Forbidden Ninjutsu: Soul Snatch", "Forbidden Ninjutsu: Black Mist", "Ninjutsu Flee: Return"};
    heroDataDualForm["kagura"] = HeroDataDualForm{"Kagura", "Mage", "Yin Yang Gathering", "none", "Apart from Seimei Umbrella", "Seimei Umbrella Open", "Rasho Umbrella Flee", "Yin Yang Overturn", "Seimei Umbrella Open", "Rasho Umbrella Flee", "Yin Yang Overturn"};
    heroDataDualForm["lapu-lapu"] = HeroDataDualForm{"Lapu-Lapu", "Fighter", "Homeland Defender", "none", "Great Sword stance", "Justice Blades", "Jungle Warrior", "Bravest Fighter", "Land Shaker", "Storm Sword", "Raging Slash"};
    heroDataDualForm["leomord"] = HeroDataDualForm{"Leomord", "Fighter", "The Oath Keeper", "none", "Mounted State", "Momentum", "Decimation Assault", "Phantom Steed", "Phantom Stomp", "Phantom Charge", "None"};
    heroDataDualForm["lukas"] = HeroDataDualForm{"Lukas", "Fighter", "Hero's Resolve", "none", "Sacred Beast form", "Flash Combo", "Flash Step", "Unleash the Beast", "Flash Combo", "Flash Step", "Shockwave Blast"};
    heroDataDualForm["roger"] = HeroDataDualForm{"Roger", "Fighter/Marksman", "Full Moon Curse", "Human form", "Wolf form", "Open Fire", "Hunter's Steps", "Wolf Transformation", "Lycan Pounce", "Bloodthirsty Howl", "Restore Human Form"};
    heroDataDualForm["selena"] = HeroDataDualForm{"Selena", "Assassin/Mage", "Symbiosis", "Elvent form", "Abyssal form", "Abyssal Trap", "Abyssal Arrow", "Prinmal Darkness", "Soul Eater", "Garotte", "Blessing of the Moon Goddess"};
    heroDataDualForm["yin"] = HeroDataDualForm{"Yin", "Fighter/Assassin", "Leave It to Me", "none", "Lieh", "Charged Punch", "Instant Blast", "My Turn", "Frenzy Strike", "Instant Blast", "none"};

    //map<string, HeroDataNoUlti> heroDataNoUlti;
    heroDataNoUlti["julian"] = {"Julian", "Assassin/Fighter", "Smith's Legacy", "Scythe", "Sword", "Chain", "Enchanced Scythe", "Enchanced Sword", "Enchanced Chain"};
    heroDataNoUlti["suyou"] = {"Suyou", "Assassin/Fighter", "Transient Immortal", "Blade Surge", "Soul Sever", "Evil Queller", "none", "none", "none"};
 
    //map<string, HeroDataSpecialSkill> heroDataSpecialSkill;
    heroDataSpecialSkill["cecilion"] = {"Cecilion", "Mage", "Overflowing", "Bat Impact", "Sanguine Claws", "Bats Feast", "Moonlit Waltz"};
    heroDataSpecialSkill["chip"] = {"Chip", "Support/Tank", "Snack Time!", "Crash Course", "Overtime", "Shortcut", "Why Walk?"};
    heroDataSpecialSkill["masha"] = {"Masha", "Fighter/Tank", "Ancient Strength", "Wild Power", "Howl Shock", "Thunderclap", "Life Recovery"};
    heroDataSpecialSkill["pharsa"] = {"Pharsa", "Mage", "Spiritual Unity", "Curse of Crow", "Energy Impact", "Feathered Air Strike", "Wings by Wings"};
    
    //map<string, HeroDataMultiWeapon> heroDataMultiWeapon;
    heroDataMultiWeapon["beatrix"] = {"Beatrix", "Marksman", "Mechanical Genius", "Renner", "Bennett", "Wesker", "Nibiru", "Masterful Gunner", "Tactical Reposition", "Renner's Apathy", "Benneth's Rage", "Wesker's Elation", "Nibiru's Passion", "Need Backup"};
}

void findHero(const string& name, 
              const map<string, HeroData>& heroData,
              const map<string, HeroData4Skill>& heroData4Skill,
              const map<string, HeroDataDualForm>& heroDataDualForm,
              const map<string, HeroDataNoUlti>& heroDataNoUlti,
              const map<string, HeroDataSpecialSkill>& heroDataSpecialSkill,
              const map<string, HeroDataMultiWeapon>& heroDataMultiWeapon) {
    // Find the hero in the map
    cout << "DEBUG: Searching for: " << name << endl;
    //it = iterator
    auto it = heroData.find(name);
    auto it4Skill = heroData4Skill.find(name);   // Check 4-skill heroes
    auto itDualForm = heroDataDualForm.find(name);
    auto itNoUlti = heroDataNoUlti.find(name);
    auto itSpecialSkill = heroDataSpecialSkill.find(name);
    auto itMultiWeapon = heroDataMultiWeapon.find(name);

    if(it != heroData.end()){
        cout<<"Hero Name : "<< it->second.name <<endl;
        cout<<"Role : "<< it->second.role<<endl;
        cout<<"Passive : "<< it->second.passive<<endl;
        cout<<"Skill 1 : "<< it->second.skill1<<endl;
        cout<<"Skill 2 : "<< it->second.skill2<<endl;
        cout<<"Ultimate : "<< it->second.ultimate<<endl;
    } 
    else if(it4Skill != heroData4Skill.end()){
        cout<< "Hero Name : " << it4Skill->second.name <<endl;
        cout<< "Role: " << it4Skill->second.role <<endl;
        cout<< "Passive: " << it4Skill->second.passive <<endl;
        cout<< "Skill 1: " << it4Skill->second.skill1 <<endl;
        cout<< "Skill 2: " << it4Skill->second.skill2 <<endl;
        cout<< "Skill 3: " << it4Skill->second.skill3 <<endl;
        cout<< "Ultimate: " << it4Skill->second.ultimate <<endl;
    }
    else if(itDualForm != heroDataDualForm.end()){
        cout<<"Hero Name : "<< itDualForm->second.name<<endl;
        cout<<"Passive : "<< itDualForm->second.passive<<endl;

        cout<<"Skill 1 ";
        if(itDualForm->second.mode1 != "none")
            cout << " ("<< itDualForm->second.mode1<<") ";
        cout<<": "<<itDualForm->second.skill1mode1<<endl;

        cout<<"Skill 2 ";
        if(itDualForm->second.mode1 != "none")
            cout<<" ("<< itDualForm->second.mode1<<") ";
        cout<<": "<<itDualForm->second.skill2mode1<<endl;

        cout<<"Ultimate ";
        if(itDualForm->second.mode1 != "none")
            cout<<" ("<< itDualForm->second.mode1<<") ";
        cout<<": "<<itDualForm->second.ultimode1<<endl;

        cout<<"Skill 1 ("<< itDualForm->second.mode2<<") : "<<itDualForm->second.skill1mode2<<endl;
        cout<<"Skill 2 ("<< itDualForm->second.mode2<<") : "<<itDualForm->second.skill2mode2<<endl;

        if(itDualForm->second.ultimode2 != "none")
            cout<<"Ultimate ("<< itDualForm->second.mode2<<") : "<<itDualForm->second.ultimode2<<endl;
    }
    else if(itNoUlti != heroDataNoUlti.end()){
        cout<<"Hero Name : "<< itNoUlti->second.name <<endl;
        cout<<"Role : "<< itNoUlti->second.role <<endl;
        cout<<"Passive : "<< itNoUlti->second.passive <<endl;
        cout<<"Skill 1 : "<< itNoUlti->second.skill1 <<endl;
        cout<<"Skill 2 : "<< itNoUlti->second.skill2 <<endl;
        cout<<"Skill 3 : "<< itNoUlti->second.skill3 <<endl;

        if(itNoUlti->second.enchancedSkill1 != "none")
            cout<<"Enchanced Skill 1 : "<< itNoUlti->second.enchancedSkill1 <<endl;
        if(itNoUlti->second.enchancedSkill2 != "none")
            cout<<"Enchanced Skill 2 : "<< itNoUlti->second.enchancedSkill2 <<endl;
        if(itNoUlti->second.enchancedSkill3 != "none")
            cout<<"Enchanced Skill 3 : "<< itNoUlti->second.enchancedSkill3 <<endl;
    }
    else if(itSpecialSkill != heroDataSpecialSkill.end()){
        cout<<"Hero Name : "<< itSpecialSkill->second.name <<endl;
        cout<<"Role : "<< itSpecialSkill->second.role<<endl;
        cout<<"Passive : "<< itSpecialSkill->second.passive<<endl;
        cout<<"Skill 1 : "<< itSpecialSkill->second.skill1<<endl;
        cout<<"Skill 2 : "<< itSpecialSkill->second.skill2<<endl;
        cout<<"Ultimate : "<< itSpecialSkill->second.ultimate<<endl;
        cout<<"Special Skill : "<< itSpecialSkill->second.specialSkill<<endl;
    } 
    else if(itMultiWeapon != heroDataMultiWeapon.end()){
        cout<<"Hero Name : "<< itMultiWeapon->second.name<<endl;
        cout<<"Role : "<< itMultiWeapon->second.role<<endl;
        cout<<"Passive : "<< itMultiWeapon->second.passive<<endl;
        cout<<"Skill 1 : "<< itMultiWeapon->second.skill1<<endl;
        cout<<"Skill 2 : "<< itMultiWeapon->second.skill2<<endl;
        cout<<"Ultimate (" << itMultiWeapon->second.weapon1 << ") : "<< itMultiWeapon->second.ulti1<<endl;
        cout<<"Ultimate (" << itMultiWeapon->second.weapon2 << ") : "<< itMultiWeapon->second.ulti2<<endl;
        cout<<"Ultimate (" << itMultiWeapon->second.weapon3 << ") : "<< itMultiWeapon->second.ulti3<<endl;
        cout<<"Ultimate (" << itMultiWeapon->second.weapon4 << ") : "<< itMultiWeapon->second.ulti4<<endl;
        cout<<"Special Skill : "<< itMultiWeapon->second.specialSkill <<endl;
    }
    else{
        cout<<name<<" is not one of Mobile Legends heroes"<<endl;
    }
}

int main()
{
    // Declare all maps
    map<string, HeroData> heroData;
    map<string, HeroData4Skill> heroData4Skill;
    map<string, HeroDataDualForm> heroDataDualForm;
    map<string, HeroDataNoUlti> heroDataNoUlti;
    map<string, HeroDataSpecialSkill> heroDataSpecialSkill;
    map<string, HeroDataMultiWeapon> heroDataMultiWeapon;

    // Initialize hero data by calling the function
    initializeHeroData(heroData, heroData4Skill, heroDataDualForm, heroDataNoUlti, heroDataSpecialSkill, heroDataMultiWeapon);
    
    string name;

    while(true){
        cout<<"===================================================="<<endl;
        cout<<"Enter hero name : ";
        //cin>>name;
        getline(cin, name); // Use getline to handle names with spaces

        // if (!getline(cin, name)) {// End of file or input error
        //     break;
        // }
        
        // if (name.empty()) {// Skip empty input
        //     cout << "Please enter a hero name.\n";
        //     continue;
        // }
        
        // Convert to lowercase for comparison
        string searchName = name;
        transform(searchName.begin(), searchName.end(), searchName.begin(), ::tolower);

        //transform(name.begin(), name.end(), name.begin(), ::tolower);

        // Find the hero in the map
        //findHero(name, heroData, heroData4Skill, heroDataDualForm, heroDataNoUlti, heroDataSpecialSkill, heroDataMultiWeapon);
        findHero(searchName, heroData, heroData4Skill, heroDataDualForm, heroDataNoUlti, heroDataSpecialSkill, heroDataMultiWeapon);
    }

    return 0;
}