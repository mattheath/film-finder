//
//  MainViewController.h
//  FilmPicker
//
//  Created by Matt Heath on 18/05/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate> {
    UILabel *textLabel;
}

@property (nonatomic, retain) IBOutlet UILabel *textLabel;

- (IBAction)showInfo:(id)sender;

- (IBAction)setFilmTitle;

@end
