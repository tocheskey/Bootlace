//
//  HomeViewController.h
//  Bootlace
//
//  Created by Neonkoala on 07/06/2010.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "commonData.h"
#import "commonFunctions.h"


@interface HomeViewController : UIViewController {
	UIWebView *homePage;
	UIView *homeAboutView;
	UIBarButtonItem *doneButton;
	UIBarButtonItem *aboutButton;
	UIBarButtonItem *refreshButton;
}

@property (nonatomic, retain) IBOutlet UIWebView *homePage;
@property (nonatomic, retain) IBOutlet UIView *homeAboutView;
@property (nonatomic, retain) IBOutlet UIBarButtonItem *doneButton;
@property (nonatomic, retain) IBOutlet UIBarButtonItem *aboutButton;
@property (nonatomic, retain) IBOutlet UIBarButtonItem *refreshButton;

- (void)flipAction:(id)sender;
- (IBAction) refreshHome:(id)sender;

@end