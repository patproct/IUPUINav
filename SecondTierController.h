//
//  SecondTierController.h
//  IUPUINavigator
//
//  Created by Patrick Proctor on 11/14/09.
//  Copyright 2009 Soylent Industries. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface SecondTierController : UIViewController {
	UILabel *label;
	NSString *text;
}
- (id)initWithText:(NSString *)text;

@property (retain) IBOutlet UILabel *label;
@property (retain) NSString *text;

@end
