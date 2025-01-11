#ifndef EVEN_CRAFTING_UI_H
#define EVEN_CRAFTING_UI_H

#include "gba/types.h"
#include "main.h"
#include "even_crafting.h"

enum EvenListAction
{
    EVEN_LIST_DOWN,
    EVEN_LIST_UP,
    EVEN_LIST_INIT,
    EVEN_LIST_ADD,
};

struct IngredientPos
{
    u8 x;
    u8 y;
};

struct ListIngredients
{
    u16 item;
    u16 count;
};

struct ListRecipes
{
    enum Recipes recipe;
};

struct EvenCraftingUiTemplate
{
    const u32 *tiles;
    const u32 *tilemap;
    const u16 *palette;
    const u8 maxIngredients;
    const u8 outputX;
    const u8 outputY;
    const struct IngredientPos positions[12];
};

enum EvenCraftingUiTemplates
{
    ECU_DEFAULT,
    //  Must be last
    ECU_TEMPLATE_NUMBER
};

void EvenCraftingUi_Init(MainCallback callback, enum EvenCraftingUiTemplates template);

#endif
