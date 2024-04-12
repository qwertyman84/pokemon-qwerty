#ifndef GUARD_NEW_SHOP_H
#define GUARD_NEW_SHOP_H

#if (USE_NEW_SHOP_CONFIG == TRUE)
void NewShop_CreatePokemartMenu(const u16 *);
void NewShop_CreateDecorationShop1Menu(const u16 *);
void NewShop_CreateDecorationShop2Menu(const u16 *);
void CB2_ExitSellNewShopMenu(void);
#endif // USE_NEW_SHOP_CONFIG

#endif // GUARD_NEW_SHOP_H
