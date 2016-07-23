//
//  PokestopAnnotation.h
//  iPokeGo
//
//  Created by Dimitri Dessus on 22/07/2016.
//  Copyright © 2016 Dimitri Dessus. All rights reserved.
//

#import <MapKit/MapKit.h>

@interface PokestopAnnotation : MKPointAnnotation

@property int pokestopID;
@property NSString *lure;

@end
