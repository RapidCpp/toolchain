#include "stdafx.h"

using namespace System;
using namespace System::Reflection;
using namespace System::Runtime::CompilerServices;
using namespace System::Runtime::InteropServices;
using namespace System::Security::Permissions;

//
// �йس��򼯵�һ����Ϣ������
// ���ơ�������Щ����ֵ���޸�
// ����򼯹�������Ϣ��
//
[assembly:AssemblyTitleAttribute(L"[!output SAFE_PROJECT_IDENTIFIER_NAME]")];
[assembly:AssemblyDescriptionAttribute(L"")];
[assembly:AssemblyConfigurationAttribute(L"")];
[assembly:AssemblyCompanyAttribute(L"[!output REGISTERED_ORGANIZATION]")];
[assembly:AssemblyProductAttribute(L"[!output SAFE_PROJECT_IDENTIFIER_NAME]")];
[assembly:AssemblyCopyrightAttribute(L"Copyright (c) [!output REGISTERED_ORGANIZATION] [!output PROJECT_YEAR]")];
[assembly:AssemblyTrademarkAttribute(L"")];
[assembly:AssemblyCultureAttribute(L"")];

//
// ���򼯵İ汾��Ϣ�������ĸ�ֵ���: 
//
//      ���汾
//      �ΰ汾
//      ���ɺ�
//      �޶���
//
// ������ָ������ֵ��Ҳ����ʹ�á��޶��š��͡����ɺš���Ĭ��ֵ��
// �����ǰ�������ʾʹ�á�*��: :

[assembly:AssemblyVersionAttribute("1.0.*")];

[assembly:ComVisible(false)];

[assembly:CLSCompliantAttribute(true)];