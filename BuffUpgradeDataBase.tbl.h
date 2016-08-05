﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
// FILE: BUFF升级表.xlsm SHEET: Sheet1 KEY: buffid + level

#pragma once
#pragma pack(1)
struct BuffUpgradeDataBase
{
	DWORD getUniqueID() const { return usage_id_hash(buffid, level); }

	WORD level; // 等级
	WORD buffid; // BuffID
	DWORD exp; // 经验
	DWORD maxhpext; // 生命附加
	DWORD pdamext; // 物攻附加
	DWORD mdamext; // 魔攻附加
	DWORD pdefext; // 物防附加
	DWORD mdefext; // 魔防附加
};
#pragma pack()

#if false
namespace table
{
	// BUFF升级表
	struct zBuffUpgradeDataBaseEntry : public zEntry
	{
		WORD level; // 等级
		WORD buffid; // BuffID
		DWORD exp; // 经验
		DWORD maxhpext; // 生命附加
		DWORD pdamext; // 物攻附加
		DWORD mdamext; // 魔攻附加
		DWORD pdefext; // 物防附加
		DWORD mdefext; // 魔防附加

		virtual const char* getClassName() const { return "BUFF升级表"; }
		static const char* getFileName() { return "BuffUpgradeDataBase.tbl"; }
		void fill(const BuffUpgradeDataBase& base)
		{
			this->id = base.getUniqueID();

			this->level = base.level;
			this->buffid = base.buffid;
			this->exp = base.exp;
			this->maxhpext = base.maxhpext;
			this->pdamext = base.pdamext;
			this->mdamext = base.mdamext;
			this->pdefext = base.pdefext;
			this->mdefext = base.mdefext;
		}
		void reset()
		{
			this->level = 0;
			this->buffid = 0;
			this->exp = 0;
			this->maxhpext = 0;
			this->pdamext = 0;
			this->mdamext = 0;
			this->pdefext = 0;
			this->mdefext = 0;
		}
	};
	typedef zDataBM<zBuffUpgradeDataBaseEntry, BuffUpgradeDataBase> BuffUpgradeDataBaseManager;
}
#endif

