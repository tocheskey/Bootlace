//
//  commonData.m
//  Bootlace
//
//  Created by Neonkoala on 12/05/2010.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import "commonData.h"


@implementation commonData

@synthesize firstLaunchVal, platform, workingDirectory, opibInitStatus, opibWorkingPath, opibBackupPath, opibTempOSDisabled, opibVersion, opibTimeout, opibDefaultOS, opibTempOS, installedDict, installed, installedVer, installedAndroidVer, installedDate, latestVerDict, upgradeDict, updateVer, updateAndroidVer, updateDate, updateURL, updateMD5, updateFiles, updateDependencies, idroidPackagePath;

+ (commonData *) sharedData {
	static commonData *sharedData;
	
	@synchronized(self) {
		if(!sharedData){
			sharedData = [[commonData alloc] init];
		}
	}
	
	return sharedData;
}

-(void)dealloc{
	[super dealloc];
}

@end
