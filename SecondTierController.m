//
//  SecondTierController.m
//  IUPUINavigator
//
//  Created by Patrick Proctor on 11/14/09.
//  Copyright 2009 Soylent Industries. All rights reserved.
//

#import "SecondTierController.h"
#import "RootViewController.h"

@implementation SecondTierController
@synthesize label;
@synthesize text;

- (id)initWithText:(NSString *)someText {
	if (self == [self initWithNibName:@"SecondTierController" bundle:nil]) {
		// Custom initialization
		self.title = @"Second";
		self.text = someText;
	}
	return self;
}

@end
