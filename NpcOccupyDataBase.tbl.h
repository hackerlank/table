﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
// FILE: NPC占领表.xlsm SHEET: Sheet1 KEY: id

#pragma once
#pragma pack(1)
struct NpcOccupyDataBase
{
	DWORD getUniqueID() const { return usage_id_hash(id); }

	DWORD id; // 编号
	char name[32]; // 名称
	DWORD relation; // 所属关系
	DWORD abroad; // 跨国占领
	DWORD level; // 等级
	DWORD money; // 费用
	DWORD map; // 地图
	DWORD posx; // 坐标X
	DWORD posy; // 坐标Y
	DWORD grade; // 积分
	DWORD npcid; // NPC编号
};
#pragma pack()

#if false
namespace table
{
	// NPC占领表
	struct zNpcOccupyDataBaseEntry : public zEntry
	{
		DWORD id; // 编号
		char name[32]; // 名称
		DWORD relation; // 所属关系
		DWORD abroad; // 跨国占领
		DWORD level; // 等级
		DWORD money; // 费用
		DWORD map; // 地图
		DWORD posx; // 坐标X
		DWORD posy; // 坐标Y
		DWORD grade; // 积分
		DWORD npcid; // NPC编号

		virtual const char* getClassName() const { return "NPC占领表"; }
		static const char* getFileName() { return "NpcOccupyDataBase.tbl"; }
		void fill(const NpcOccupyDataBase& base)
		{
			this->id = base.getUniqueID();

			this->id = base.id;
			strncpy(this->name, base.name, 32);
			this->relation = base.relation;
			this->abroad = base.abroad;
			this->level = base.level;
			this->money = base.money;
			this->map = base.map;
			this->posx = base.posx;
			this->posy = base.posy;
			this->grade = base.grade;
			this->npcid = base.npcid;
		}
		void reset()
		{
			this->id = 0;
			this->name[0] = '\0';
			this->relation = 0;
			this->abroad = 0;
			this->level = 0;
			this->money = 0;
			this->map = 0;
			this->posx = 0;
			this->posy = 0;
			this->grade = 0;
			this->npcid = 0;
		}
	};
	typedef zDataBM<zNpcOccupyDataBaseEntry, NpcOccupyDataBase> NpcOccupyDataBaseManager;
}
#endif

