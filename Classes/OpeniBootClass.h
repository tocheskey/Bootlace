//
//  OpeniBootClass.h
//  BootlaceV2
//
//  Created by Neonkoala on 25/09/2010.
//  Copyright 2010 Neonkoala.co.uk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <IOKit/IOKitLib.h>
#import <Foundation/NSTask.h>
#import <sys/mman.h>
#import "commonData.h"
#import "commonFunctions.h"
#import "getFile.h"
#import "BSPatch.h"
#import "partial/partial.h"


@interface OpeniBootClass : NSObject {
	BSPatch *bsPatchInstance;
	getFile *getFileInstance;
	commonFunctions *commonInstance;
	
	NSString *llbPath;
	NSString *iBootPath;
	NSString *openibootPath;
	
	NSMutableDictionary *deviceDict;
	
	NSDictionary *iBootPatches;
	NSDictionary *LLBPatches;
	NSDictionary *kernelPatches;	
}

@property (nonatomic, retain) NSString *llbPath;
@property (nonatomic, retain) NSString *iBootPath;
@property (nonatomic, retain) NSString *openibootPath;

@property (nonatomic, retain) NSMutableDictionary *deviceDict;

@property (nonatomic, retain) NSDictionary *iBootPatches;
@property (nonatomic, retain) NSDictionary *LLBPatches;
@property (nonatomic, retain) NSDictionary *kernelPatches;

- (void)opibInstall;
- (void)opibUninstall;

- (int)opibParseUpdatePlist;
- (int)opibGetNORFromManifest;
- (int)opibFlashManifest;
- (int)opibFlashIMG3:(NSString *)path usingService:(io_connect_t)norServiceConnection type:(BOOL)isLLB;
- (int)opibEncryptIMG3:(NSString *)srcPath to:(NSString *)dstPath with:(NSString *)templateIMG3 key:(NSString *)key iv:(NSString *)iv type:(BOOL)isLLB;
- (int)opibDecryptIMG3:(NSString *)srcPath to:(NSString *)dstPath key:(NSString *)key iv:(NSString *)iv type:(BOOL)isLLB;
- (int)opibPatchNORFiles:(BOOL)withIbox;
- (int)opibPatchIbox:(NSString *)path;
- (int)opibPatchKernelCache;
- (int)opibGetFirmwareBundle;
- (int)opibGetOpeniBoot;

- (io_service_t)opibGetIOService:(NSString *)name;

- (void)opibCleanUp;
- (void)opibCheckForUpdates;
- (void)opibUpdateProgress:(float)subProgress;


@end