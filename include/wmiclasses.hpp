/**
  *
  * WMI
  * @author Thomas Sparber (2016)
  *
 **/

#ifndef WMICLASSES_HPP
#define WMICLASSES_HPP

#include <string>

#include <wmi.hpp>
#include <wmiresult.hpp>

namespace Wmi
{
struct Win32_ComputerSystemProduct
{

 Win32_ComputerSystemProduct():
	Caption(),
	Description(),
	IdentifyingNumber(),
	Name(),
	UUID(),
	Vendor(),
	Version()
	{ }
void setProperties(const WmiResult &result, std::size_t index){

	result.extract(index,"Caption",(*this).Caption);
		result.extract(index,"Description",(*this).Description);
			result.extract(index,"IdentifyingNumber",(*this).IdentifyingNumber);
				result.extract(index,"Name",(*this).Name);
				result.extract(index,"UUID",(*this).UUID);
				result.extract(index,"Vendor",(*this).Vendor);
				result.extract(index,"Version",(*this).Version);

}

	static std::string getWmiClassName()
	{
		return "Win32_ComputerSystemProduct";
	}

	std::string Caption;
	std::string Description;
	std::string IdentifyingNumber;
	std::string Name;
	std::string UUID;
    std::string Vendor;
    std::string Version;
};
struct Win32_ComputerSystem
{

	Win32_ComputerSystem() :
		AdminPasswordStatus(), AutomaticManagedPagefile(), AutomaticResetBootOption(), AutomaticResetCapability(),
		BootOptionOnLimit(), BootOptionOnWatchDog(), BootROMSupported(), BootupState(), Caption(), ChassisBootupState(),
		CreationClassName(), CurrentTimeZone(), DaylightInEffect(), Description(), DNSHostName(), Domain(), DomainRole(),
		EnableDaylightSavingsTime(), FrontPanelResetStatus(), InfraredSupported(), InitialLoadInfo(), InstallDate(),
		KeyboardPasswordStatus(), LastLoadInfo(), Manufacturer(), Model(), Name(), NameFormat(), NetworkServerModeEnabled(),
		NumberOfLogicalProcessors(), NumberOfProcessors(), OEMLogoBitmap(), OEMStringArray(), PartOfDomain(),
		PauseAfterReset(), PCSystemType(), PowerManagementCapabilities(), PowerManagementSupported(),
		PowerOnPasswordStatus(), PowerState(), PowerSupplyState(), PrimaryOwnerContact(), PrimaryOwnerName(),
		ResetCapability(), ResetCount(), ResetLimit(), Roles(), Status(), SupportContactDescription(), SystemStartupDelay(),
		SystemStartupOptions(), SystemStartupSetting(), SystemType(), ThermalState(), TotalPhysicalMemory(), UserName(),
		WakeUpType(), Workgroup()
	{}

	void setProperties(const WmiResult &result, std::size_t index)
	{

		result.extract(index,"AdminPasswordStatus",(*this).AdminPasswordStatus);
		result.extract(index,"AutomaticManagedPagefile",(*this).AutomaticManagedPagefile);
		result.extract(index,"AutomaticResetBootOption",(*this).AutomaticResetBootOption);
		result.extract(index,"AutomaticResetCapability",(*this).AutomaticResetCapability);
		result.extract(index,"BootOptionOnLimit",(*this).BootOptionOnLimit);
		result.extract(index,"BootOptionOnWatchDog",(*this).BootOptionOnWatchDog);
		result.extract(index,"BootROMSupported",(*this).BootROMSupported);
		result.extract(index,"BootupState",(*this).BootupState);
		result.extract(index,"Caption",(*this).Caption);
		result.extract(index,"ChassisBootupState",(*this).ChassisBootupState);
		result.extract(index,"CreationClassName",(*this).CreationClassName);
		result.extract(index,"CurrentTimeZone",(*this).CurrentTimeZone);
		result.extract(index,"DaylightInEffect",(*this).DaylightInEffect);
		result.extract(index,"Description",(*this).Description);
		result.extract(index,"DNSHostName",(*this).DNSHostName);
		result.extract(index,"Domain",(*this).Domain);
		result.extract(index,"DomainRole",(*this).DomainRole);
		result.extract(index,"EnableDaylightSavingsTime",(*this).EnableDaylightSavingsTime);
		result.extract(index,"FrontPanelResetStatus",(*this).FrontPanelResetStatus);
		result.extract(index,"InfraredSupported",(*this).InfraredSupported);
		result.extract(index,"InitialLoadInfo",(*this).InitialLoadInfo);
		result.extract(index,"InstallDate",(*this).InstallDate);
		result.extract(index,"KeyboardPasswordStatus",(*this).KeyboardPasswordStatus);
		result.extract(index,"LastLoadInfo",(*this).LastLoadInfo);
		result.extract(index,"Manufacturer",(*this).Manufacturer);
		result.extract(index,"Model",(*this).Model);
		result.extract(index,"Name",(*this).Name);
		result.extract(index,"NameFormat",(*this).NameFormat);
		result.extract(index,"NetworkServerModeEnabled",(*this).NetworkServerModeEnabled);
		result.extract(index,"NumberOfLogicalProcessors",(*this).NumberOfLogicalProcessors);
		result.extract(index,"NumberOfProcessors",(*this).NumberOfProcessors);
		result.extract(index,"OEMLogoBitmap",(*this).OEMLogoBitmap);
		result.extract(index,"OEMStringArray",(*this).OEMStringArray);
		result.extract(index,"PartOfDomain",(*this).PartOfDomain);
		result.extract(index,"PauseAfterReset",(*this).PauseAfterReset);
		result.extract(index,"PCSystemType",(*this).PCSystemType);
		result.extract(index,"PowerManagementCapabilities",(*this).PowerManagementCapabilities);
		result.extract(index,"PowerManagementSupported",(*this).PowerManagementSupported);
		result.extract(index,"PowerOnPasswordStatus",(*this).PowerOnPasswordStatus);
		result.extract(index,"PowerState",(*this).PowerState);
		result.extract(index,"PowerSupplyState",(*this).PowerSupplyState);
		result.extract(index,"PrimaryOwnerContact",(*this).PrimaryOwnerContact);
		result.extract(index,"PrimaryOwnerName",(*this).PrimaryOwnerName);
		result.extract(index,"ResetCapability",(*this).ResetCapability);
		result.extract(index,"ResetCount",(*this).ResetCount);
		result.extract(index,"ResetLimit",(*this).ResetLimit);
		result.extract(index,"Roles",(*this).Roles);
		result.extract(index,"Status",(*this).Status);
		result.extract(index,"SupportContactDescription",(*this).SupportContactDescription);
		result.extract(index,"SystemStartupDelay",(*this).SystemStartupDelay);
		result.extract(index,"SystemStartupOptions",(*this).SystemStartupOptions);
		result.extract(index,"SystemStartupSetting",(*this).SystemStartupSetting);
		result.extract(index,"SystemType",(*this).SystemType);
		result.extract(index,"ThermalState",(*this).ThermalState);
		result.extract(index,"TotalPhysicalMemory",(*this).TotalPhysicalMemory);
		result.extract(index,"UserName",(*this).UserName);
		result.extract(index,"WakeUpType",(*this).WakeUpType);
		result.extract(index,"Workgroup",(*this).Workgroup);
	}

	static std::string getWmiClassName()
	{
		return "Win32_ComputerSystem";
	}

	int AdminPasswordStatus;
	bool AutomaticManagedPagefile;
	bool AutomaticResetBootOption;
	bool AutomaticResetCapability;
	std::string BootOptionOnLimit;
	std::string BootOptionOnWatchDog;
	bool BootROMSupported;
	std::string BootupState;
	std::string Caption;
	int ChassisBootupState;
	std::string CreationClassName;
	int CurrentTimeZone;
	bool DaylightInEffect;
	std::string Description;
	std::string DNSHostName;
	std::string Domain;
	int DomainRole;
	bool EnableDaylightSavingsTime;
	int FrontPanelResetStatus;
	bool InfraredSupported;
	std::string InitialLoadInfo;
	std::string InstallDate;
	int KeyboardPasswordStatus;
	std::string LastLoadInfo;
	std::string Manufacturer;
	std::string Model;
	std::string Name;
	std::string NameFormat;
	bool NetworkServerModeEnabled;
	int NumberOfLogicalProcessors;
	int NumberOfProcessors;
	std::string OEMLogoBitmap;
	std::string OEMStringArray;
	bool PartOfDomain;
	int PauseAfterReset;
	int PCSystemType;
	std::string PowerManagementCapabilities;
	std::string PowerManagementSupported;
	int PowerOnPasswordStatus;
	int PowerState;
	int PowerSupplyState;
	std::string PrimaryOwnerContact;
	std::string PrimaryOwnerName;
	int ResetCapability;
	int ResetCount;
	int ResetLimit;
	std::string Roles;
	std::string Status;
	std::string SupportContactDescription;
	std::string SystemStartupDelay;
	std::string SystemStartupOptions;
	std::string SystemStartupSetting;
	std::string SystemType;
	int ThermalState;
	uint64_t TotalPhysicalMemory;
	std::string UserName;
	int WakeUpType;
	std::string Workgroup;

}; //end struct Win32_ComputerSystem

struct Win32_ParallelPort
{

	Win32_ParallelPort() :
		Availability(), Capabilities(), CapabilityDescriptions(), Caption(), ConfigManagerErrorCode(),
		ConfigManagerUserConfig(), CreationClassName(), Description(), DeviceID(), DMASupport(), ErrorCleared(),
		ErrorDescription(), InstallDate(), LastErrorCode(), MaxNumberControlled(), Name(), OSAutoDiscovered(),
		PNPDeviceID(), PowerManagementCapabilities(), PowerManagementSupported(), ProtocolSupported(), Status(),
		StatusInfo(), SystemCreationClassName(), SystemName(), TimeOfLastReset()
	{}

	void setProperties(const WmiResult &result, std::size_t index)
	{
		//vscode was a great help with search(.+?), 
		//and replace result.extract(index, "$1", (*this).$1);
		result.extract(index,"Availability",(*this).Availability);
		result.extract(index,"Capabilities",(*this).Capabilities);
		result.extract(index,"CapabilityDescriptions",(*this).CapabilityDescriptions);
		result.extract(index,"Caption",(*this).Caption);
		result.extract(index,"ConfigManagerErrorCode",(*this).ConfigManagerErrorCode);
		result.extract(index,"ConfigManagerUserConfig",(*this).ConfigManagerUserConfig);
		result.extract(index,"CreationClassName",(*this).CreationClassName);
		result.extract(index,"Description",(*this).Description);
		result.extract(index,"DeviceID",(*this).DeviceID);
		result.extract(index,"DMASupport",(*this).DMASupport);
		result.extract(index,"ErrorCleared",(*this).ErrorCleared);
		result.extract(index,"ErrorDescription",(*this).ErrorDescription);
		result.extract(index,"InstallDate",(*this).InstallDate);
		result.extract(index,"LastErrorCode",(*this).LastErrorCode);
		result.extract(index,"MaxNumberControlled",(*this).MaxNumberControlled);
		result.extract(index,"Name",(*this).Name);
		result.extract(index,"OSAutoDiscovered",(*this).OSAutoDiscovered);
		result.extract(index,"PNPDeviceID",(*this).PNPDeviceID);
		result.extract(index,"PowerManagementCapabilities",(*this).PowerManagementCapabilities);
		result.extract(index,"PowerManagementSupported",(*this).PowerManagementSupported);
		result.extract(index,"ProtocolSupported",(*this).ProtocolSupported);
		result.extract(index,"Status",(*this).Status);
		result.extract(index,"StatusInfo",(*this).StatusInfo);
		result.extract(index,"SystemCreationClassName",(*this).SystemCreationClassName);
		result.extract(index,"SystemName",(*this).SystemName);
		result.extract(index,"TimeOfLastReset",(*this).TimeOfLastReset);
		
	}

	static std::string getWmiClassName()
	{
		return "Win32_ParallelPort";
	}
	
	int Availability;
	std::string Capabilities;
	std::string CapabilityDescriptions;
	std::string Caption;
	int ConfigManagerErrorCode;
	bool ConfigManagerUserConfig;
	std::string CreationClassName;
	std::string Description;
	std::string DeviceID;
	bool DMASupport;
	std::string ErrorCleared;
	std::string ErrorDescription;
	std::string InstallDate;
	int LastErrorCode;
	int MaxNumberControlled;
	std::string Name;
	bool OSAutoDiscovered;
	std::string PNPDeviceID;
	std::string PowerManagementCapabilities;
	bool PowerManagementSupported;
	int ProtocolSupported;
	std::string Status;
	std::string StatusInfo;
	std::string SystemCreationClassName;
	std::string SystemName;
	std::string TimeOfLastReset;

}; //end class Win32_ParallelPort

struct Win32_Service
{

	Win32_Service() :
		AcceptPause(), AcceptStop(), Caption(), CheckPoint(), CreationClassName(), Description(),
		DesktopInteract(), DisplayName(), ErrorControl(), ExitCode(), InstallDate(), Name(), PathName(),
		ProcessId(), ServiceSpecificExitCode(), ServiceType(), Started(), StartMode(), StartName(), State(),
		Status(), SystemCreationClassName(), SystemName(), TagId(), WaitHint()
	{}

	void setProperties(const WmiResult &result, std::size_t index)
	{

		result.extract(index, "AcceptPause", (*this).AcceptPause);
		result.extract(index, "AcceptStop", (*this).AcceptStop);
		result.extract(index, "Caption", (*this).Caption);
		result.extract(index, "CheckPoint", (*this).CheckPoint);
		result.extract(index, "CreationClassName", (*this).CreationClassName);
		result.extract(index, "Description", (*this).Description);
		result.extract(index, "DesktopInteract", (*this).DesktopInteract);
		result.extract(index, "DisplayName", (*this).DisplayName);
		result.extract(index, "ErrorControl", (*this).ErrorControl);
		result.extract(index, "ExitCode", (*this).ExitCode);
		result.extract(index, "InstallDate", (*this).InstallDate);
		result.extract(index, "Name", (*this).Name);
		result.extract(index, "PathName", (*this).PathName);
		result.extract(index, "ProcessId", (*this).ProcessId);
		result.extract(index, "ServiceSpecificExitCode", (*this).ServiceSpecificExitCode);
		result.extract(index, "ServiceType", (*this).ServiceType);
		result.extract(index, "Started", (*this).Started);
		result.extract(index, "StartMode", (*this).StartMode);
		result.extract(index, "StartName", (*this).StartName);
		result.extract(index, "State", (*this).State);
		result.extract(index, "Status", (*this).Status);
		result.extract(index, "SystemCreationClassName", (*this).SystemCreationClassName);
		result.extract(index, "SystemName", (*this).SystemName);
		result.extract(index, "TagId", (*this).TagId);
		result.extract(index, "WaitHint", (*this).WaitHint);
	}

	static std::string getWmiClassName()
	{
		return "Win32_Service";
	}
	
	bool AcceptPause;
	bool AcceptStop;
	std::string Caption;
	int CheckPoint;
	std::string CreationClassName;
	std::string Description;
	bool DesktopInteract;
	std::string DisplayName;
	std::string ErrorControl;
	int ExitCode;
	std::string InstallDate;
	std::string Name;
	std::string PathName;
	int ProcessId;
	int ServiceSpecificExitCode;
	std::string ServiceType;
	bool Started;
	std::string StartMode;
	std::string StartName;
	std::string State;
	std::string Status;
	std::string SystemCreationClassName;
	std::string SystemName;
	int TagId;
	int WaitHint;

}; //end Win32_Service

struct Win32_SerialPort
{

	Win32_SerialPort() :
		Availability(), Binary(), Capabilities(), CapabilityDescriptions(), Caption(),
		ConfigManagerErrorCode(), ConfigManagerUserConfig(), CreationClassName(), Description(),
		DeviceID(), ErrorCleared(), ErrorDescription(), InstallDate(), LastErrorCode(), MaxBaudRate(),
		MaximumInputBufferSize(), MaximumOutputBufferSize(), MaxNumberControlled(), Name(),
		OSAutoDiscovered(), PNPDeviceID(), PowerManagementCapabilities(), PowerManagementSupported(),
		ProtocolSupported(), ProviderType(), SettableBaudRate(), SettableDataBits(),
		SettableFlowControl(), SettableParity(), SettableParityCheck(), SettableRLSD(),
		SettableStopBits(), Status(), StatusInfo(), Supports16BitMode(), SupportsDTRDSR(),
		SupportsElapsedTimeouts(), SupportsIntTimeouts(), SupportsParityCheck(), SupportsRLSD(),
		SupportsRTSCTS(), SupportsSpecialCharacters(), SupportsXOnXOff(), SupportsXOnXOffSet(),
		SystemCreationClassName(), SystemName(), TimeOfLastReset()
	{}

	void setProperties(const WmiResult &result, std::size_t index)
	{
	result.extract(index,"Availability",(*this).Availability);
	result.extract(index,"Binary",(*this).Binary);
	result.extract(index,"Capabilities",(*this).Capabilities);
	result.extract(index,"CapabilityDescriptions",(*this).CapabilityDescriptions);
	result.extract(index,"Caption",(*this).Caption);
	result.extract(index,"ConfigManagerErrorCode",(*this).ConfigManagerErrorCode);
	result.extract(index,"ConfigManagerUserConfig",(*this).ConfigManagerUserConfig);
	result.extract(index,"CreationClassName",(*this).CreationClassName);
	result.extract(index,"Description",(*this).Description);
	result.extract(index,"DeviceID",(*this).DeviceID);
	result.extract(index,"ErrorCleared",(*this).ErrorCleared);
	result.extract(index,"ErrorDescription",(*this).ErrorDescription);
	result.extract(index,"InstallDate",(*this).InstallDate);
	result.extract(index,"LastErrorCode",(*this).LastErrorCode);
	result.extract(index,"MaxBaudRate",(*this).MaxBaudRate);
	result.extract(index,"MaximumInputBufferSize",(*this).MaximumInputBufferSize);
	result.extract(index,"MaximumOutputBufferSize",(*this).MaximumOutputBufferSize);
	result.extract(index,"MaxNumberControlled",(*this).MaxNumberControlled);
	result.extract(index,"Name",(*this).Name);
	result.extract(index,"OSAutoDiscovered",(*this).OSAutoDiscovered);
	result.extract(index,"PNPDeviceID",(*this).PNPDeviceID);
	result.extract(index,"PowerManagementCapabilities",(*this).PowerManagementCapabilities);
	result.extract(index,"PowerManagementSupported",(*this).PowerManagementSupported);
	result.extract(index,"ProtocolSupported",(*this).ProtocolSupported);
	result.extract(index,"ProviderType",(*this).ProviderType);
	result.extract(index,"SettableBaudRate",(*this).SettableBaudRate);
	result.extract(index,"SettableDataBits",(*this).SettableDataBits);
	result.extract(index,"SettableFlowControl",(*this).SettableFlowControl);
	result.extract(index,"SettableParity",(*this).SettableParity);
	result.extract(index,"SettableParityCheck",(*this).SettableParityCheck);
	result.extract(index,"SettableRLSD",(*this).SettableRLSD);
	result.extract(index,"SettableStopBits",(*this).SettableStopBits);
	result.extract(index,"Status",(*this).Status);
	result.extract(index,"StatusInfo",(*this).StatusInfo);
	result.extract(index,"Supports16BitMode",(*this).Supports16BitMode);
	result.extract(index,"SupportsDTRDSR",(*this).SupportsDTRDSR);
	result.extract(index,"SupportsElapsedTimeouts",(*this).SupportsElapsedTimeouts);
	result.extract(index,"SupportsIntTimeouts",(*this).SupportsIntTimeouts);
	result.extract(index,"SupportsParityCheck",(*this).SupportsParityCheck);
	result.extract(index,"SupportsRLSD",(*this).SupportsRLSD);
	result.extract(index,"SupportsRTSCTS",(*this).SupportsRTSCTS);
	result.extract(index,"SupportsSpecialCharacters",(*this).SupportsSpecialCharacters);
	result.extract(index,"SupportsXOnXOff",(*this).SupportsXOnXOff);
	result.extract(index,"SupportsXOnXOffSet",(*this).SupportsXOnXOffSet);
	result.extract(index,"SystemCreationClassName",(*this).SystemCreationClassName);
	result.extract(index,"SystemName",(*this).SystemName);
	result.extract(index,"TimeOfLastReset",(*this).TimeOfLastReset);
	}

	static std::string getWmiClassName()
	{
		return "Win32_SerialPort";
	}
	
	int Availability;
	bool Binary;
	std::string Capabilities;
	std::string CapabilityDescriptions;
	std::string Caption;
	int ConfigManagerErrorCode;
	bool ConfigManagerUserConfig;
	std::string CreationClassName;
	std::string Description;
	std::string DeviceID;
	std::string ErrorCleared;
	std::string ErrorDescription;
	std::string InstallDate;
	int LastErrorCode;
	uint64_t MaxBaudRate;
	uint64_t MaximumInputBufferSize;
	uint64_t MaximumOutputBufferSize;
	int MaxNumberControlled;
	std::string Name;
	bool OSAutoDiscovered;
	std::string PNPDeviceID;
	std::string PowerManagementCapabilities;
	bool PowerManagementSupported;
	int ProtocolSupported;
	std::string ProviderType;
	std::string SettableBaudRate;
	std::string SettableDataBits;
	std::string SettableFlowControl;
	std::string SettableParity;
	std::string SettableParityCheck;
	std::string SettableRLSD;
	std::string SettableStopBits;
	std::string Status;
	std::string StatusInfo;
	bool Supports16BitMode;
	bool SupportsDTRDSR;
	bool SupportsElapsedTimeouts;
	bool SupportsIntTimeouts;
	bool SupportsParityCheck;
	bool SupportsRLSD;
	bool SupportsRTSCTS;
	bool SupportsSpecialCharacters;
	bool SupportsXOnXOff;
	bool SupportsXOnXOffSet;
	std::string SystemCreationClassName;
	std::string SystemName;
	std::string TimeOfLastReset;

}; //end Win32_SerialPort
struct SoftwareLicensingService{

	SoftwareLicensingService():
	ClientMachineID(),
	DiscoveredKeyManagementServiceMachineIpAddress(),
	DiscoveredKeyManagementServiceMachineName(),
	DiscoveredKeyManagementServiceMachinePort(),
	IsKeyManagementServiceMachine(),
	KeyManagementServiceCurrentCount(),
	KeyManagementServiceDnsPublishing(),
	KeyManagementServiceFailedRequests(),
	KeyManagementServiceHostCaching(),
	KeyManagementServiceLicensedRequests(),
	KeyManagementServiceListeningPort(),
	KeyManagementServiceLookupDomain(),
	KeyManagementServiceLowPriority(),
	KeyManagementServiceMachine(),
	KeyManagementServiceNonGenuineGraceRequests(),
	KeyManagementServiceNotificationRequests(),
	KeyManagementServiceOOBGraceRequests(),
	KeyManagementServiceOOTGraceRequests(),
	KeyManagementServicePort(),
	KeyManagementServiceProductKeyID(),
	KeyManagementServiceTotalRequests(),
	KeyManagementServiceUnlicensedRequests(),
	OA2xBiosMarkerMinorVersion(),
	OA2xBiosMarkerStatus(),
	OA3xOriginalProductKey(),
	OA3xOriginalProductKeyDescription(),
	OA3xOriginalProductKeyPkPn(),
	PolicyCacheRefreshRequired(),
	RemainingWindowsReArmCount(),
	RequiredClientCount(),
	TokenActivationAdditionalInfo(),
	TokenActivationCertificateThumbprint(),
	TokenActivationGrantNumber(),
	TokenActivationILID(),
	TokenActivationILVID(),
	Version(),
	VLActivationInterval(),
	VLRenewalInterval()
	{}
	void setProperties(const WmiResult &result, std::size_t index)
	{
		result.extract(index, "ClientMachineID", (*this).ClientMachineID);
		result.extract(index, "DiscoveredKeyManagementServiceMachineIpAddress", (*this).DiscoveredKeyManagementServiceMachineIpAddress);
		result.extract(index, "DiscoveredKeyManagementServiceMachineName", (*this).DiscoveredKeyManagementServiceMachineName);
		result.extract(index, "DiscoveredKeyManagementServiceMachinePort", (*this).DiscoveredKeyManagementServiceMachinePort);
		result.extract(index, "IsKeyManagementServiceMachine", (*this).IsKeyManagementServiceMachine);
		result.extract(index, "KeyManagementServiceCurrentCount", (*this).KeyManagementServiceCurrentCount);
		result.extract(index, "KeyManagementServiceDnsPublishing", (*this).KeyManagementServiceDnsPublishing);
		result.extract(index, "KeyManagementServiceFailedRequests", (*this).KeyManagementServiceFailedRequests);
		result.extract(index, "KeyManagementServiceHostCaching", (*this).KeyManagementServiceHostCaching);
		result.extract(index, "KeyManagementServiceLicensedRequests", (*this).KeyManagementServiceLicensedRequests);
		result.extract(index, "KeyManagementServiceListeningPort", (*this).KeyManagementServiceListeningPort);
		result.extract(index, "KeyManagementServiceLookupDomain", (*this).KeyManagementServiceLookupDomain);
		result.extract(index, "KeyManagementServiceLowPriority", (*this).KeyManagementServiceLowPriority);
		result.extract(index, "KeyManagementServiceMachine", (*this).KeyManagementServiceMachine);
		result.extract(index, "KeyManagementServiceNonGenuineGraceRequests", (*this).KeyManagementServiceNonGenuineGraceRequests);
		result.extract(index, "KeyManagementServiceNotificationRequests", (*this).KeyManagementServiceNotificationRequests);
		result.extract(index, "KeyManagementServiceOOBGraceRequests", (*this).KeyManagementServiceOOBGraceRequests);
		result.extract(index, "KeyManagementServiceOOTGraceRequests", (*this).KeyManagementServiceOOTGraceRequests);
		result.extract(index, "KeyManagementServicePort", (*this).KeyManagementServicePort);
		result.extract(index, "KeyManagementServiceProductKeyID", (*this).KeyManagementServiceProductKeyID);
		result.extract(index, "KeyManagementServiceTotalRequests", (*this).KeyManagementServiceTotalRequests);
		result.extract(index, "KeyManagementServiceUnlicensedRequests", (*this).KeyManagementServiceUnlicensedRequests);
		result.extract(index, "OA2xBiosMarkerMinorVersion", (*this).OA2xBiosMarkerMinorVersion);
		result.extract(index, "OA2xBiosMarkerStatus", (*this).OA2xBiosMarkerStatus);
		result.extract(index, "OA3xOriginalProductKey", (*this).OA3xOriginalProductKey);
		result.extract(index, "OA3xOriginalProductKeyDescription", (*this).OA3xOriginalProductKeyDescription);
		result.extract(index, "OA3xOriginalProductKeyPkPn", (*this).OA3xOriginalProductKeyPkPn);
		result.extract(index, "PolicyCacheRefreshRequired", (*this).PolicyCacheRefreshRequired);
		result.extract(index, "RemainingWindowsReArmCount", (*this).RemainingWindowsReArmCount);
		result.extract(index, "RequiredClientCount", (*this).RequiredClientCount);
		result.extract(index, "TokenActivationAdditionalInfo", (*this).TokenActivationAdditionalInfo);
		result.extract(index, "TokenActivationCertificateThumbprint", (*this).TokenActivationCertificateThumbprint);
		result.extract(index, "TokenActivationGrantNumber", (*this).TokenActivationGrantNumber);
		result.extract(index, "TokenActivationILID", (*this).TokenActivationILID);
		result.extract(index, "TokenActivationILVID", (*this).TokenActivationILVID);
		result.extract(index, "Version", (*this).Version);
		result.extract(index, "VLActivationInterval", (*this).VLActivationInterval);
		result.extract(index, "VLRenewalInterval", (*this).VLRenewalInterval);
	}
	static std::string getWmiClassName()
	{
		return "SoftwareLicensingService";
	}
	std::string ClientMachineID;
	std::string DiscoveredKeyManagementServiceMachineIpAddress;
	std::string DiscoveredKeyManagementServiceMachineName;
	int DiscoveredKeyManagementServiceMachinePort;
	int IsKeyManagementServiceMachine ;
	int KeyManagementServiceCurrentCount ;
	bool KeyManagementServiceDnsPublishing ;
	int KeyManagementServiceFailedRequests ;
	bool KeyManagementServiceHostCaching ;
	int KeyManagementServiceLicensedRequests ;
	int KeyManagementServiceListeningPort ;
	std::string KeyManagementServiceLookupDomain;
	bool KeyManagementServiceLowPriority ;
	std::string KeyManagementServiceMachine;
	int KeyManagementServiceNonGenuineGraceRequests ;
	int KeyManagementServiceNotificationRequests ;
	int KeyManagementServiceOOBGraceRequests ;
	int KeyManagementServiceOOTGraceRequests ;
	int KeyManagementServicePort ;
	std::string KeyManagementServiceProductKeyID;
	int KeyManagementServiceTotalRequests ;
	int KeyManagementServiceUnlicensedRequests ;
	int OA2xBiosMarkerMinorVersion ;
	int OA2xBiosMarkerStatus ;
	std::string OA3xOriginalProductKey;
	std::string OA3xOriginalProductKeyDescription;
	std::string OA3xOriginalProductKeyPkPn;
	int PolicyCacheRefreshRequired ;
	int RemainingWindowsReArmCount ;
	int RequiredClientCount ;
	std::string TokenActivationAdditionalInfo;
	int TokenActivationCertificateThumbprint;
	int TokenActivationGrantNumber ;
	std::string TokenActivationILID;
	int TokenActivationILVID ;
	std::string Version;
	int VLActivationInterval ;
	int VLRenewalInterval ;
};

struct Win32_OperatingSystem
{
	Win32_OperatingSystem():
	BootDevice(),
	BuildNumber(),
	BuildType(),
	Caption(),
	CodeSet(),
	CountryCode(),
	CreationClassName(),
	CSCreationClassName(),
	CSName(),
	CurrentTimeZone(),
	DataExecutionPrevention_32BitApplications(),
	DataExecutionPrevention_Available(),
	DataExecutionPrevention_Drivers(),
	DataExecutionPrevention_SupportPolicy(),
	Debug(),
	Description(),
	Distributed(),
	EncryptionLevel(),
	ForegroundApplicationBoost(),
	FreePhysicalMemory(),
	FreeSpaceInPagingFiles(),
	FreeVirtualMemory(),
	InstallDate(),
	LastBootUpTime(),
	LocalDateTime(),
	Locale(),
	Manufacturer(),
	MaxNumberOfProcesses(),
	MaxProcessMemorySize(),
	MUILanguages(),
	Name(),
	NumberOfProcesses(),
	NumberOfUsers(),
	OperatingSystemSKU(),
	Organization(),
	OSArchitecture(),
	OSLanguage(),
	OSProductSuite(),
	OSType(),
	PortableOperatingSystem(),
	Primary(),
	ProductType(),
	RegisteredUser(),
	SerialNumber(),
	ServicePackMajorVersion(),
	ServicePackMinorVersion(),
	SizeStoredInPagingFiles(),
	Status(),
	SuiteMask(),
	SystemDevice(),
	SystemDirectory(),
	SystemDrive(),
	TotalVirtualMemorySize(),
	TotalVisibleMemorySize(),
	Version(),
	WindowsDirectory()
	{}

	void setProperties(const WmiResult &result, std::size_t index)
	{
		result.extract(index, "BootDevice", (*this).BootDevice);
		result.extract(index, "BuildNumber", (*this).BuildNumber);
		result.extract(index, "BuildType", (*this).BuildType);
		result.extract(index, "Caption", (*this).Caption);
		result.extract(index, "CodeSet", (*this).CodeSet);
		result.extract(index, "CountryCode", (*this).CountryCode);
		result.extract(index, "CreationClassName", (*this).CreationClassName);
		result.extract(index, "CSCreationClassName", (*this).CSCreationClassName);
		result.extract(index, "CSName", (*this).CSName);
		result.extract(index, "CurrentTimeZone", (*this).CurrentTimeZone);
		result.extract(index, "DataExecutionPrevention_32BitApplications", (*this).DataExecutionPrevention_32BitApplications);
		result.extract(index, "DataExecutionPrevention_Available", (*this).DataExecutionPrevention_Available);
		result.extract(index, "DataExecutionPrevention_Drivers", (*this).DataExecutionPrevention_Drivers);
		result.extract(index, "DataExecutionPrevention_SupportPolicy", (*this).DataExecutionPrevention_SupportPolicy);
		result.extract(index, "Debug", (*this).Debug);
		result.extract(index, "Description", (*this).Description);
		result.extract(index, "Distributed", (*this).Distributed);
		result.extract(index, "EncryptionLevel", (*this).EncryptionLevel);
		result.extract(index, "ForegroundApplicationBoost", (*this).ForegroundApplicationBoost);
		result.extract(index, "FreePhysicalMemory", (*this).FreePhysicalMemory);
		result.extract(index, "FreeSpaceInPagingFiles", (*this).FreeSpaceInPagingFiles);
		result.extract(index, "FreeVirtualMemory", (*this).FreeVirtualMemory);
		result.extract(index, "InstallDate", (*this).InstallDate);
		result.extract(index, "LastBootUpTime", (*this).LastBootUpTime);
		result.extract(index, "LocalDateTime", (*this).LocalDateTime);
		result.extract(index, "Locale", (*this).Locale);
		result.extract(index, "Manufacturer", (*this).Manufacturer);
		result.extract(index, "MaxNumberOfProcesses", (*this).MaxNumberOfProcesses);
		result.extract(index, "MaxProcessMemorySize", (*this).MaxProcessMemorySize);
		result.extract(index, "MUILanguages", (*this).MUILanguages);
		result.extract(index, "Name", (*this).Name);
		result.extract(index, "NumberOfProcesses", (*this).NumberOfProcesses);
		result.extract(index, "NumberOfUsers", (*this).NumberOfUsers);
		result.extract(index, "OperatingSystemSKU", (*this).OperatingSystemSKU);
		result.extract(index, "Organization", (*this).Organization);
		result.extract(index, "OSArchitecture", (*this).OSArchitecture);
		result.extract(index, "OSLanguage", (*this).OSLanguage);
		result.extract(index, "OSProductSuite", (*this).OSProductSuite);
		result.extract(index, "OSType", (*this).OSType);
		result.extract(index, "PortableOperatingSystem", (*this).PortableOperatingSystem);
		result.extract(index, "Primary", (*this).Primary);
		result.extract(index, "ProductType", (*this).ProductType);
		result.extract(index, "RegisteredUser", (*this).RegisteredUser);
		result.extract(index, "SerialNumber", (*this).SerialNumber);
		result.extract(index, "ServicePackMajorVersion", (*this).ServicePackMajorVersion);
		result.extract(index, "ServicePackMinorVersion", (*this).ServicePackMinorVersion);
		result.extract(index, "SizeStoredInPagingFiles", (*this).SizeStoredInPagingFiles);
		result.extract(index, "Status", (*this).Status);
		result.extract(index, "SuiteMask", (*this).SuiteMask);
		result.extract(index, "SystemDevice", (*this).SystemDevice);
		result.extract(index, "SystemDirectory", (*this).SystemDirectory);
		result.extract(index, "SystemDrive", (*this).SystemDrive);
		result.extract(index, "TotalVirtualMemorySize", (*this).TotalVirtualMemorySize);
		result.extract(index, "TotalVisibleMemorySize", (*this).TotalVisibleMemorySize);
		result.extract(index, "Version", (*this).Version);
		result.extract(index, "WindowsDirectory", (*this).WindowsDirectory);
		 
	}
	static std::string getWmiClassName()
	{
		return "Win32_OperatingSystem";
	}
	std::string BootDevice ;
	std::string BuildNumber ;
	std::string BuildType ;
	std::string Caption ;
	std::string CodeSet ;
	std::string CountryCode ;
	std::string CreationClassName ;
	std::string CSCreationClassName ;
	std::string CSName ;
	int CurrentTimeZone ;
	bool DataExecutionPrevention_32BitApplications ;
	bool DataExecutionPrevention_Available ;
	bool DataExecutionPrevention_Drivers ;
	int DataExecutionPrevention_SupportPolicy ;
	bool Debug ;
	std::string Description ;
	bool Distributed ;
	int EncryptionLevel ;
	int ForegroundApplicationBoost ;
	uint64_t    FreePhysicalMemory ;
	uint64_t    FreeSpaceInPagingFiles ;
	uint64_t    FreeVirtualMemory ;
	/////////////////////////////////////////////////////
	std::string InstallDate ;
	std::string LastBootUpTime ;///THIS MAYBE INCORRECT
	std::string LocalDateTime ;
	/////////////////////////////////////////////////////////
	std::string Locale ;
	std::string Manufacturer ;
	uint64_t    MaxNumberOfProcesses ;
	uint64_t    MaxProcessMemorySize ;
	std::string MUILanguages ;
	std::string Name ;
	int NumberOfProcesses ;
	int NumberOfUsers ;
	int OperatingSystemSKU ;
	std::string Organization ;
	std::string OSArchitecture ;
	int OSLanguage ;
	int OSProductSuite ;
	int OSType ;
	bool PortableOperatingSystem ;
	bool Primary ;
	int ProductType ;
	std::string RegisteredUser ;
	std::string SerialNumber ;
	int ServicePackMajorVersion ;
	int ServicePackMinorVersion ;
	uint64_t    SizeStoredInPagingFiles ;
	std::string Status ;
	int SuiteMask ;
	std::string SystemDevice ;
	std::string SystemDirectory ;
	std::string SystemDrive ;
	uint64_t    TotalVirtualMemorySize ;
	uint64_t    TotalVisibleMemorySize ;
	std::string Version ;
	std::string WindowsDirectory ;
};
} //end namespace wmi

#endif //WMICLASSES_HPP