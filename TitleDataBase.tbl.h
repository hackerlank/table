﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
// FILE: 头衔称号表.xlsm SHEET: Sheet1 KEY: id

#pragma once
#pragma pack(1)
struct TitleDataBase
{
	DWORD getUniqueID() const { return usage_id_hash(id); }

	DWORD id; // 编号
	char name[32]; // 名称
	DWORD time; // 时间
	DWORD pdam_per; // 百分比物攻加成
	DWORD mdam_per; // 百分比化攻加成
	DWORD pdef_per; // 百分比物防加成
	DWORD mdef_per; // 百分比化防加成
	DWORD maxhp_per; // 百分比生命值加成
	DWORD pdam_ext; // 物攻固定值
	DWORD mdam_ext; // 化攻固定值
	DWORD pdef_ext; // 物防固定值
	DWORD mdef_ext; // 化防固定值
	DWORD maxhp_ext; // 生命固定值
};
#pragma pack()

#if false
namespace table
{
	// 头衔称号表
	struct zTitleDataBaseEntry : public zEntry
	{
		DWORD id; // 编号
		char name[32]; // 名称
		DWORD time; // 时间
		DWORD pdam_per; // 百分比物攻加成
		DWORD mdam_per; // 百分比化攻加成
		DWORD pdef_per; // 百分比物防加成
		DWORD mdef_per; // 百分比化防加成
		DWORD maxhp_per; // 百分比生命值加成
		DWORD pdam_ext; // 物攻固定值
		DWORD mdam_ext; // 化攻固定值
		DWORD pdef_ext; // 物防固定值
		DWORD mdef_ext; // 化防固定值
		DWORD maxhp_ext; // 生命固定值

		virtual const char* getClassName() const { return "头衔称号表"; }
		static const char* getFileName() { return "TitleDataBase.tbl"; }
		void fill(const TitleDataBase& base)
		{
			this->id = base.getUniqueID();

			this->id = base.id;
			strncpy(this->name, base.name, 32);
			this->time = base.time;
			this->pdam_per = base.pdam_per;
			this->mdam_per = base.mdam_per;
			this->pdef_per = base.pdef_per;
			this->mdef_per = base.mdef_per;
			this->maxhp_per = base.maxhp_per;
			this->pdam_ext = base.pdam_ext;
			this->mdam_ext = base.mdam_ext;
			this->pdef_ext = base.pdef_ext;
			this->mdef_ext = base.mdef_ext;
			this->maxhp_ext = base.maxhp_ext;
		}
		void reset()
		{
			this->id = 0;
			this->name[0] = '\0';
			this->time = 0;
			this->pdam_per = 0;
			this->mdam_per = 0;
			this->pdef_per = 0;
			this->mdef_per = 0;
			this->maxhp_per = 0;
			this->pdam_ext = 0;
			this->mdam_ext = 0;
			this->pdef_ext = 0;
			this->mdef_ext = 0;
			this->maxhp_ext = 0;
		}
	};
	typedef zDataBM<zTitleDataBaseEntry, TitleDataBase> TitleDataBaseManager;
}
#endif

