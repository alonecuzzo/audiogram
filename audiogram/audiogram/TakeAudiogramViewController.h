//
//  TakeAudiogramViewController.h
//  audiogram
//
//  Created by Eric J Bell on 10/1/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TakeAudiogramViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIActionSheetDelegate>

@property (strong, nonatomic) UIActionSheet *actionSheet;

-(IBAction)showActionSheet:(id)sender;

@end
