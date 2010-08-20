//
//  AdvancedViewController.h
//  Bootlace
//
//  Created by Neonkoala on 12/05/2010.
//  Copyright 2010 Nick Dawson. All rights reserved.
//

#import "commonData.h"
#import "commonFunctions.h"
#import <UIKit/UIKit.h>


@interface AdvancedViewController : UIViewController {
	UILabel *openibootVersion;
	UIGlassButton *resetButton;
}

@property (nonatomic, retain) IBOutlet UILabel *openibootVersion;
@property (nonatomic, retain) IBOutlet UIGlassButton *resetButton;

- (IBAction) backupSettings:(id)sender;
- (IBAction) restoreSettings:(id)sender;
- (IBAction) resetSettings:(id)sender;

@end
