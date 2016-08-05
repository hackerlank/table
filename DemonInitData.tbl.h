﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
// FILE: 奇异兽道具表.xlsm SHEET: Sheet1 KEY: id

#pragma once
#pragma pack(1)
struct DemonInitData
{
	DWORD getUniqueID() const { return usage_id_hash(id); }

	DWORD id; // 道具ID
	char growthrates[128]; // 成长率
	char liliangz1[32]; // 力量资质
	char zhiliz1[32]; // 智力资质
	char minjiez1[32]; // 敏捷资质
	char tizhiz1[32]; // 体质资质
	char jingshenz1[32]; // 精神资质
	char initskill[256]; // 出生技能
	char levelskill[256]; // 升级技能
	DWORD type; // 宠物类型
	DWORD buttomZ1; // 宠物资质下限
	char liliangz2[32]; // 力量资质2
	char zhiliz2[32]; // 智力资质2
	char minjiez2[32]; // 敏捷资质2
	char tizhiz2[32]; // 体质资质2
	char jingshenz2[32]; // 精神资质2
	DWORD buttomZ2; // 宠物资质下限2
	DWORD level; // 携带等级
	DWORD hatchtype; // 扭蛋类型
	DWORD material; // 材料ID
	DWORD materialnum; // 白品数量
	DWORD moneytype; // 货币类型
	DWORD money; // 白品费用
};
#pragma pack()

#if false
namespace table
{
	// 奇异兽道具表
	struct zDemonInitDataEntry : public zEntry
	{
		DWORD id; // 道具ID
		char growthrates[128]; // 成长率
		char liliangz1[32]; // 力量资质
		char zhiliz1[32]; // 智力资质
		char minjiez1[32]; // 敏捷资质
		char tizhiz1[32]; // 体质资质
		char jingshenz1[32]; // 精神资质
		char initskill[256]; // 出生技能
		char levelskill[256]; // 升级技能
		DWORD type; // 宠物类型
		DWORD buttomZ1; // 宠物资质下限
		char liliangz2[32]; // 力量资质2
		char zhiliz2[32]; // 智力资质2
		char minjiez2[32]; // 敏捷资质2
		char tizhiz2[32]; // 体质资质2
		char jingshenz2[32]; // 精神资质2
		DWORD buttomZ2; // 宠物资质下限2
		DWORD level; // 携带等级
		DWORD hatchtype; // 扭蛋类型
		DWORD material; // 材料ID
		DWORD materialnum; // 白品数量
		DWORD moneytype; // 货币类型
		DWORD money; // 白品费用

		virtual const char* getClassName() const { return "奇异兽道具表"; }
		static const char* getFileName() { return "DemonInitData.tbl"; }
		void fill(const DemonInitData& base)
		{
			this->id = base.getUniqueID();

			this->id = base.id;
			strncpy(this->growthrates, base.growthrates, 128);
			strncpy(this->liliangz1, base.liliangz1, 32);
			strncpy(this->zhiliz1, base.zhiliz1, 32);
			strncpy(this->minjiez1, base.minjiez1, 32);
			strncpy(this->tizhiz1, base.tizhiz1, 32);
			strncpy(this->jingshenz1, base.jingshenz1, 32);
			strncpy(this->initskill, base.initskill, 256);
			strncpy(this->levelskill, base.levelskill, 256);
			this->type = base.type;
			this->buttomZ1 = base.buttomZ1;
			strncpy(this->liliangz2, base.liliangz2, 32);
			strncpy(this->zhiliz2, base.zhiliz2, 32);
			strncpy(this->minjiez2, base.minjiez2, 32);
			strncpy(this->tizhiz2, base.tizhiz2, 32);
			strncpy(this->jingshenz2, base.jingshenz2, 32);
			this->buttomZ2 = base.buttomZ2;
			this->level = base.level;
			this->hatchtype = base.hatchtype;
			this->material = base.material;
			this->materialnum = base.materialnum;
			this->moneytype = base.moneytype;
			this->money = base.money;
		}
		void reset()
		{
			this->id = 0;
			this->growthrates[0] = '\0';
			this->liliangz1[0] = '\0';
			this->zhiliz1[0] = '\0';
			this->minjiez1[0] = '\0';
			this->tizhiz1[0] = '\0';
			this->jingshenz1[0] = '\0';
			this->initskill[0] = '\0';
			this->levelskill[0] = '\0';
			this->type = 0;
			this->buttomZ1 = 0;
			this->liliangz2[0] = '\0';
			this->zhiliz2[0] = '\0';
			this->minjiez2[0] = '\0';
			this->tizhiz2[0] = '\0';
			this->jingshenz2[0] = '\0';
			this->buttomZ2 = 0;
			this->level = 0;
			this->hatchtype = 0;
			this->material = 0;
			this->materialnum = 0;
			this->moneytype = 0;
			this->money = 0;
		}
	};
	typedef zDataBM<zDemonInitDataEntry, DemonInitData> DemonInitDataManager;
}
#endif

