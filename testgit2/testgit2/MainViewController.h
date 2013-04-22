//
//  MainViewController.h
//  testgit2
//
//  Created by Dave Duprey on 13-04-22.
//  Copyright (c) 2013 Dave Duprey. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

- (IBAction)showInfo:(id)sender;

@end
