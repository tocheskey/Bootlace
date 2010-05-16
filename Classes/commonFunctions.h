//
//  commonFunctions.h
//  Bootlace
//
//  Created by Neonkoala on 12/05/2010.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import "commonData.h"
#import "nvramFunctions.h"
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>


@interface commonFunctions : NSObject {

}

- (int)rebootAndroid;
- (int)rebootConsole;
- (int)backupNVRAM;
- (int)restoreNVRAM;
- (int)resetNVRAM;
- (int)applyNVRAM;
- (void)sendError:(NSString *)alertMsg;
- (void)sendTerminalError:(NSString *)alertMsg;
- (void)sendConfirmation:(NSString *)alertMsg withTag:(int)tag;
- (void)sendSuccess:(NSString *)alertMsg;

@end
