//
//  FTWDevice.h
//  FTW
//
//  Created by Soroush Khanlou on 7/13/12.
//  Copyright (c) 2012 FTW. All rights reserved.
//

#import <Foundation/Foundation.h>

#include <CoreFoundation/CoreFoundation.h>

//for mac address
#include <IOKit/IOKitLib.h>
#include <IOKit/network/IOEthernetInterface.h>
#include <IOKit/network/IONetworkInterface.h>
#include <IOKit/network/IOEthernetController.h>

//for sys info

#include <sys/socket.h> // Per msqr
#include <sys/sysctl.h>
#include <net/if.h>
#include <net/if_dl.h>

#import "NSString+MD5.h"



typedef enum {
    FTWDeviceFamilyMacBookAir,
    FTWDeviceFamilyMacBookPro,
    FTWDeviceFamilyMacBook,
    FTWDeviceFamilyMacPro,
    FTWDeviceFamilyiMac,
    FTWDeviceFamilyMacMini,
    FTWDeviceFamilyXserve,
    FTWDeviceFamilyUnknown
} FTWDeviceFamily;


@interface FTWDevice : NSObject


@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString *localizedName;
@property (strong, nonatomic) NSString *systemName;
@property (strong, nonatomic) NSString *systemVersion;
@property (strong, nonatomic) NSString *model;
@property (strong, nonatomic) NSString *uniqueIdentifier;

@property (strong, nonatomic) NSString *MACAddress;
@property (assign, nonatomic) NSString *platform;
@property (strong, nonatomic) NSString *hardwareModel;

@property (assign, nonatomic) NSUInteger CPUFrequency;
@property (assign, nonatomic) NSUInteger busFrequency;
@property (assign, nonatomic) NSUInteger CPUCount;
@property (assign, nonatomic) NSUInteger totalMemory;
@property (assign, nonatomic) NSUInteger userMemory;

@property (strong, nonatomic) NSNumber *totalDiskSpace;
@property (strong, nonatomic) NSNumber *freeDiskSpace;
@property (assign, nonatomic) BOOL isRetina;
@property (assign, nonatomic) FTWDeviceFamily deviceFamily;
@property (strong, nonatomic) NSString *serialNumber;

+ (id)currentDevice;


@end