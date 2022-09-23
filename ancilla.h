#pragma once
#include "types.h"
#include "zelda_rtl.h"
#include "sprite.h"

typedef struct CheckPlayerCollOut {
  uint16 r4, r6;
  uint16 r8, r10;
} CheckPlayerCollOut;

typedef struct AncillaOamInfo {
  uint8 x;
  uint8 y;
  uint8 flags;
} AncillaOamInfo;

typedef struct AncillaRadialProjection {
  uint8 r0, r2, r4, r6;
} AncillaRadialProjection;

uint16 Ancilla_GetX(int k);
uint16 Ancilla_GetY(int k);
void Ancilla_SetX(int k, uint16 x);
void Ancilla_SetY(int k, uint16 y);
int Ancilla_AllocHigh();
void Ancilla_Empty(int k);
void Ancilla_Unused_14(int k);
void Ancilla_Unused_25(int k);
void SpinSpark_Draw(int k, int offs);
bool SomarianBlock_CheckEmpty(OamEnt *oam);
void AddDashingDustEx(uint8 a, uint8 y, uint8 flag);
void AddBirdCommon(int k);
ProjectSpeedRet Bomb_ProjectSpeedTowardsPlayer(int k, uint16 x, uint16 y, uint8 vel);
void Boomerang_CheatWhenNoOnesLooking(int k, ProjectSpeedRet *pt);
void Medallion_CheckSpriteDamage(int k);
void Ancilla_CheckDamageToSprite(int k, uint8 type);
void Ancilla_CheckDamageToSprite_aggressive(int k, uint8 type);
void CallForDuckIndoors();
void Ancilla_Sfx1_Pan(int k, uint8 v);
void Ancilla_Sfx2_Pan(int k, uint8 v);
void Ancilla_Sfx3_Pan(int k, uint8 v);
void AncillaAdd_FireRodShot(uint8 type, uint8 y);
void SomariaBlock_SpawnBullets(int k);
void Ancilla_Main();
ProjectSpeedRet Ancilla_ProjectReflexiveSpeedOntoSprite(int k, uint16 x, uint16 y, uint8 vel);
void Bomb_CheckSpriteDamage(int k);
void Ancilla_ExecuteAll();
void Ancilla_ExecuteOne(uint8 type, int k);
void Ancilla13_IceRodSparkle(int k);
void AncillaAdd_IceRodSparkle(int k);
void Ancilla01_SomariaBullet(int k);
bool Ancilla_ReturnIfOutsideBounds(int k, AncillaOamInfo *info);
void SomarianBlast_Draw(int k);
void Ancilla02_FireRodShot(int k);
void FireShot_Draw(int k);
uint8 Ancilla_CheckTileCollision_staggered(int k);
uint8 Ancilla_CheckTileCollision(int k);
bool Ancilla_CheckTileCollisionOneFloor(int k);
bool Ancilla_CheckTileCollision_targeted(int k, uint16 x, uint16 y);
bool Ancilla_CheckTileCollision_Class2(int k);
bool Ancilla_CheckTileCollision_Class2_Inner(int k);
void Ancilla04_BeamHit(int k);
int Ancilla_CheckSpriteCollision(int k);
bool Ancilla_CheckSpriteCollision_Single(int k, int j);
void Ancilla_SetupHitBox(int k, SpriteHitBox *hb);
ProjectSpeedRet Ancilla_ProjectSpeedTowardsPlayer(int k, uint8 vel);
PairU8 Ancilla_IsRightOfLink(int k);
PairU8 Ancilla_IsBelowLink(int k);
void Ancilla_WeaponTink();
void Ancilla_MoveX(int k);
void Ancilla_MoveY(int k);
void Ancilla_MoveZ(int k);
void Ancilla05_Boomerang(int k);
bool Boomerang_ScreenEdge(int k);
void Boomerang_StopOffScreen(int k);
void Boomerang_Terminate(int k);
void Boomerang_Draw(int k);
void Ancilla06_WallHit(int k);
void Ancilla_SwordWallHit(int k);
void WallHit_Draw(int k);
void Ancilla07_Bomb(int k);
void Ancilla_ApplyConveyor(int k);
void Bomb_CheckSpriteAndPlayerDamage(int k);
void Ancilla_HandleLiftLogic(int k);
void Ancilla_LatchAltitudeAboveLink(int k);
void Ancilla_LatchLinkCoordinates(int k, int j);
void Ancilla_LatchCarriedPosition(int k);
uint16 Ancilla_LatchYCoordToZ(int k);
int Bomb_GetDisplacementFromLink(int k);
void Bomb_Draw(int k);
void Ancilla08_DoorDebris(int k);
void DoorDebris_Draw(int k);
void Ancilla09_Arrow(int k);
void Arrow_Draw(int k);
void Ancilla0A_ArrowInTheWall(int k);
void Ancilla0B_IceRodShot(int k);
void Ancilla11_IceRodWallHit(int k);
void IceShotSpread_Draw(int k);
void Ancilla33_BlastWallExplosion(int k);
void AncillaDraw_BlastWallBlast(int k, int x, int y);
OamEnt *AncillaDraw_Explosion(OamEnt *oam, int frame, int idx, int idx_end, uint8 r11, int x, int y);
void Ancilla15_JumpSplash(int k);
void Ancilla16_HitStars(int k);
void Ancilla17_ShovelDirt(int k);
void Ancilla32_BlastWallFireball(int k);
void Ancilla18_EtherSpell(int k);
void EtherSpell_HandleLightningStroke(int k);
void EtherSpell_HandleOrbPulse(int k);
void EtherSpell_HandleRadialSpin(int k);
OamEnt *AncillaDraw_EtherBlitzBall(OamEnt *oam, const AncillaRadialProjection *arp, int s);
OamEnt *AncillaDraw_EtherBlitzSegment(OamEnt *oam, const AncillaRadialProjection *arp, int s, int k);
void AncillaDraw_EtherBlitz(int k);
void AncillaDraw_EtherOrb(int k, OamEnt *oam);
void AncillaAdd_BombosSpell(uint8 a, uint8 y);
void Ancilla19_BombosSpell(int k);
void BombosSpell_ControlFireColumns(int k);
void BombosSpell_FinishFireColumns(int kk);
void AncillaDraw_BombosFireColumn(int kk);
void BombosSpell_ControlBlasting(int kk);
void AncillaDraw_BombosBlast(int k);
void Ancilla1C_QuakeSpell(int k);
void QuakeSpell_ShakeScreen(int k);
void QuakeSpell_ControlBolts(int k);
void AncillaDraw_QuakeInitialBolts(int k);
void QuakeSpell_SpreadBolts(int k);
void Ancilla1A_PowderDust(int k);
void Ancilla_MagicPowder_Draw(int k);
void Powder_ApplyDamageToSprites(int k);
void Ancilla1D_ScreenShake(int k);
void Ancilla1E_DashDust(int k);
void Ancilla1F_Hookshot(int k);
void Ancilla20_Blanket(int k);
void Ancilla21_Snore(int k);
void Ancilla3B_SwordUpSparkle(int k);
void Ancilla3C_SpinAttackChargeSparkle(int k);
void Ancilla35_MasterSwordReceipt(int k);
void Ancilla22_ItemReceipt(int k);
OamEnt *Ancilla_ReceiveItem_Draw(int k, int x, int y);
void Ancilla28_WishPondItem(int k);
void WishPondItem_Draw(int k);
void Ancilla42_HappinessPondRupees(int k);
void HapinessPondRupees_ExecuteRupee(int k, int i);
void HapinessPondRupees_GetState(int j, int k);
void HapinessPondRupees_SaveState(int k, int j);
void Ancilla_TransmuteToSplash(int k);
void Ancilla3D_ItemSplash(int k);
void ObjectSplash_Draw(int k);
void Ancilla29_MilestoneItemReceipt(int k);
void ItemReceipt_TransmuteToRisingCrystal(int k);
void Ancilla_RisingCrystal(int k);
void AncillaAdd_OccasionalSparkle(int k);
void Ancilla43_GanonsTowerCutscene(int k);
void AncillaDraw_GTCutsceneCrystal(OamEnt *oam, int x, int y);
void GTCutscene_ActivateSparkle();
OamEnt *GTCutscene_SparkleALot(OamEnt *oam);
void Ancilla36_Flute(int k);
void Ancilla37_WeathervaneExplosion(int k);
void AncillaDraw_WeathervaneExplosionWoodDebris(int k);
void Ancilla38_CutsceneDuck(int k);
void Ancilla23_LinkPoof(int k);
void MorphPoof_Draw(int k);
void Ancilla40_DwarfPoof(int k);
void Ancilla3F_BushPoof(int k);
void Ancilla26_SwordSwingSparkle(int k);
void Ancilla2A_SpinAttackSparkleA(int k);
void SpinAttackSparkleA_TransmuteToNextSpark(int k);
void Ancilla2B_SpinAttackSparkleB(int k);
Point16U Sparkle_PrepOamFromRadial(AncillaRadialProjection p);
void SpinAttackSparkleB_Closer(int k);
void Ancilla30_ByrnaWindupSpark(int k);
void ByrnaWindupSpark_TransmuteToNormal(int k);
void Ancilla31_ByrnaSpark(int k);
void Ancilla_SwordBeam(int k);
void Ancilla0D_SpinAttackFullChargeSpark(int k);
void Ancilla27_Duck(int k);
void AncillaAdd_SomariaBlock(uint8 type, uint8 y);
void SomariaBlock_CheckForTransitTile(int k);
int Ancilla_CheckBasicSpriteCollision(int k);
bool Ancilla_CheckBasicSpriteCollision_Single(int k, int j);
void Ancilla_SetupBasicHitBox(int k, SpriteHitBox *hb);
void Ancilla2C_SomariaBlock(int k);
void AncillaDraw_SomariaBlock(int k);
bool SomariaBlock_CheckForSwitch(int k);
void SomariaBlock_FizzleAway(int k);
void Ancilla2D_SomariaBlockFizz(int k);
void Ancilla39_SomariaPlatformPoof(int k);
void Ancilla2E_SomariaBlockFission(int k);
void Ancilla2F_LampFlame(int k);
void Ancilla41_WaterfallSplash(int k);
void Ancilla24_Gravestone(int k);
void Ancilla34_SkullWoodsFire(int k);
void Ancilla3A_BigBombExplosion(int k);
void RevivalFairy_Main();
void RevivalFairy_Dust();
void RevivalFairy_MonitorHP();
void GameOverText_Draw();
int AncillaAdd_AddAncilla_Bank08(uint8 type, uint8 y);
void Ancilla_PrepOamCoord(int k, Point16U *info);
void Ancilla_PrepAdjustedOamCoord(int k, Point16U *info);
uint8 Ancilla_SetOam_XY(OamEnt *oam, uint16 x, uint16 y);
uint8 Ancilla_SetOam_XY_safe(OamEnt *oam, uint16 x, uint16 y);
bool Ancilla_CheckLinkCollision(int k, int j, CheckPlayerCollOut *out);
bool Hookshot_CheckProximityToLink(int x, int y);
bool Ancilla_CheckForEntranceTrigger(int what);
void AncillaDraw_Shadow(OamEnt *oam, int k, int x, int y, uint8 pal);
void Ancilla_AllocateOamFromRegion_B_or_E(uint8 size);
OamEnt *Ancilla_AllocateOamFromCustomRegion(OamEnt *oam);
OamEnt *HitStars_UpdateOamBufferPosition(OamEnt *oam);
bool Hookshot_ShouldIEvenBotherWithTiles(int k);
AncillaRadialProjection Ancilla_GetRadialProjection(uint8 a, uint8 r8);
int Ancilla_AllocateOamFromRegion_A_or_D_or_F(int k, uint8 size);
void Ancilla_AddHitStars(uint8 a, uint8 y);
void AncillaAdd_Blanket(uint8 a);
void AncillaAdd_Snoring(uint8 a, uint8 y);
void AncillaAdd_Bomb(uint8 a, uint8 y);
uint8 AncillaAdd_Boomerang(uint8 a, uint8 y);
void AncillaAdd_TossedPondItem(uint8 a, uint8 xin, uint8 yin);
void AddHappinessPondRupees(uint8 arg);
void AncillaAdd_FallingPrize(uint8 a, uint8 item_idx, uint8 yv);
void AncillaAdd_ChargedSpinAttackSparkle();
void AncillaAdd_ExplodingWeatherVane(uint8 a, uint8 y);
void AncillaAdd_CutsceneDuck(uint8 a, uint8 y);
void AncillaAdd_SomariaPlatformPoof(int k);
void AncillaAdd_SuperBombExplosion(uint8 a, uint8 y);
void ConfigureRevivalAncillae();
void AncillaAdd_LampFlame(uint8 a, uint8 y);
void AncillaAdd_MSCutscene(uint8 a, uint8 y);
void AncillaAdd_DashDust(uint8 a, uint8 y);
void AncillaAdd_DashDust_charging(uint8 a, uint8 y);
void AncillaAdd_BlastWallFireball(uint8 a, uint8 y, int r4);
int AncillaAdd_Arrow(uint8 a, uint8 ax, uint8 ay, uint16 xcoord, uint16 ycoord);
void AncillaAdd_BunnyPoof(uint8 a, uint8 y);
void AncillaAdd_CapePoof(uint8 a, uint8 y);
void AncillaAdd_DwarfPoof(uint8 ain, uint8 yin);
void AncillaAdd_BushPoof(uint16 x, uint16 y);
void AncillaAdd_EtherSpell(uint8 a, uint8 y);
void AncillaAdd_VictorySpin();
void AncillaAdd_MagicPowder(uint8 a, uint8 y);
void AncillaAdd_WallTapSpark(uint8 a, uint8 y);
void AncillaAdd_SwordSwingSparkle(uint8 a, uint8 y);
void AncillaAdd_DashTremor(uint8 a, uint8 y);
void AncillaAdd_BoomerangWallClink(int k);
void AncillaAdd_HookshotWallClink(int kin, uint8 a, uint8 y);
void AncillaAdd_Duck_take_off(uint8 a, uint8 y);
void AddBirdTravelSomething(uint8 a, uint8 y);
void AncillaAdd_QuakeSpell(uint8 a, uint8 y);
void AncillaAdd_SpinAttackInitSpark(uint8 a, uint8 x, uint8 y);
void AncillaAdd_BlastWall();
void AncillaAdd_SwordChargeSparkle(int k);
void AncillaAdd_SilverArrowSparkle(int kin);
void AncillaAdd_IceRodShot(uint8 a, uint8 y);
bool AncillaAdd_Splash(uint8 a, uint8 y);
void AncillaAdd_GraveStone(uint8 ain, uint8 yin);
void AncillaAdd_WaterfallSplash();
void AncillaAdd_GTCutscene();
int AncillaAdd_DoorDebris();
void FireRodShot_BecomeSkullWoodsFire(int k);
int Ancilla_AddAncilla(uint8 a, uint8 y);
bool AncillaAdd_CheckForPresence(uint8 a);
int AncillaAdd_ArrowFindSlot(uint8 type, uint8 ay);
int Ancilla_CheckInitialTile_A(int k);
bool Ancilla_CheckInitialTileCollision_Class2(int k);
uint8 Ancilla_TerminateSelectInteractives(uint8 y);
void Ancilla_SetXY(int k, uint16 x, uint16 y);
void AncillaAdd_ExplodingSomariaBlock(int k);
bool Ancilla_AddRupees(int k);
void DashDust_Motive(int k);
uint8 Ancilla_CalculateSfxPan(int k);
int Ancilla_AllocInit(uint8 type, uint8 y);
void AddSwordBeam(uint8 y);
void AncillaSpawn_SwordChargeSparkle();
int DashTremor_TwiddleOffset(int k);
void Ancilla_TerminateIfOffscreen(int j);
bool Bomb_CheckUndersideSpriteStatus(int k, Point16U *out_pt, uint8 *out_r10);
void Sprite_CreateDeflectedArrow(int k);
