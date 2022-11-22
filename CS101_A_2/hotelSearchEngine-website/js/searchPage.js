//geting the user search data from temp local storage 
let loadsavedData = localStorage.getItem("searchJSONSaved");

//console.log(loadsavedData);
//find and store the HTML id's
let searchBarSearchPage = document.getElementById('search-bar-id-search-page');
let startDateSearchPage = document.getElementById('start-date-id-search-page');
let endDateSearchPage = document.getElementById('end-date-id-search-page');
let numberOfRoomsSearchPage = document.getElementById('number-of-rooms-id-search-page');
let numberOfGuestsSearchPage = document.getElementById('number-of-guests-id-search-page');
let hotelBoxWrapperID = document.getElementById('search-result-wraper-id');
let hotelNameID = document.getElementById('hotel-name-id');
let hotelPriceID = document.getElementById('price-id-best-deal');
let sortByValue = document.getElementById('sort-by');




//find and store the HTML classes
let hotelNameClass = document.getElementsByClassName('hotel-name');
let hotelPriceClass = document.getElementsByClassName('price');
let hotelStarRatingClass = document.getElementsByClassName('hotel-stars');
let hotelFavouritsClass = document.getElementsByClassName('favourit-icon');
let heartButtonClass = document.getElementsByClassName('heart-button');
let hotelBoxWrapperClass = document.getElementsByClassName('hotel-info-box');
let hotelInfoBoxClass = document.getElementsByClassName('hotel-name-stars-info');
let hotelViewDealClass = document.getElementsByClassName('view-deal');






//create class to hold data in the JSON file.

class hotelClass{
    constructor(name,locaion,price,rating,starRating,freeCanellation,favourites,type){
        this.name = name;
        this.locaion = locaion;
        this.price = price;
        this.rating = rating;
        this.starRating = starRating;
        this.freeCanellation = freeCanellation;
        this.favourites = favourites;
        this.type = type;
    }
}


//call the fetch func

LoadHotels("./JSON/hotels.JSON");




//fetch data from the hotels.JSON file and provid asscess
async function LoadHotels(file){
    try{
        const responceFromJSONHotels = await fetch(file);
        let hotelsString = await responceFromJSONHotels.json();
        
        printData(hotelsString);

       

    }catch(err){
        alert(err);
    }
}

function printData(jsonData){
    const jsonObject = jsonData['hotelListOfObjects'];
    const allHotels = jsonObject['hotels'];
    let count = 0;
    console.log(allHotels);
    
    for(let hotel of allHotels){
        
        
        hotelNameClass[count].innerHTML = hotel['name'];
        hotelPriceClass[count].innerHTML = "&dollar;" + hotel['price'];
    
        let getcurrent = document.getElementById(count);
        //console.log(hotel['favourites']);
        //console.log(heartButtonClass);
        
        heartButtonClass[count].onclick = function(){
            console.log('Clicked')
            if(getcurrent.innerHTML === '<i class="fa-regular fa-heart"></i>'){
                getcurrent.innerHTML = '<i class="fa-solid fa-heart"></i>';
                hotel['favourites'] = true;
            }else if(getcurrent.innerHTML === '<i class="fa-solid fa-heart"></i>'){
                getcurrent.innerHTML = '<i class="fa-regular fa-heart"></i>';
                hotel['favourites'] = false;
            }
            //console.log(hotel['favourites']);
        }
        
        
        
        //add guests rating
        hotelInfoBoxClass[count].append("Guests Rating:" + hotel['rating']);

        //check if hotel offers free canellation
        if(!hotel['freeCanellation']){
            document.getElementsByClassName('cancellation')[count].innerHTML = "no free Canellation";
        }

        //check star raiting and update to fit
        switch (hotel['starRating']) {
            case 0:
                hotelStarRatingClass[count].innerHTML = "";
                break;
            case 1:
                hotelStarRatingClass[count].innerHTML = '<i class="fa-solid fa-star"></i>';
                break;
            case 2:
                hotelStarRatingClass[count].innerHTML = '<i class="fa-solid fa-star"></i><i class="fa-solid fa-star"></i>';
                break;
            case 3:
                hotelStarRatingClass[count].innerHTML = '<i class="fa-solid fa-star"></i><i class="fa-solid fa-star"></i><i class="fa-solid fa-star"></i>';
                break;
            case 4:
                hotelStarRatingClass[count].innerHTML = '<i class="fa-solid fa-star"></i><i class="fa-solid fa-star"></i><i class="fa-solid fa-star"></i><i class="fa-solid fa-star"></i>';
                break;
            case 5:
                hotelStarRatingClass[count].innerHTML = '<i class="fa-solid fa-star"></i><i class="fa-solid fa-star"></i><i class="fa-solid fa-star"></i><i class="fa-solid fa-star"></i><i class="fa-solid fa-star"></i>';
                break;
            default:
                break;
        }
        //console.log(hotelViewDealClass[count]);

        hotelViewDealClass[count].addEventListener('click', function(event){
            
            event.preventDefault();             
            //info i need to pass on (price, name, number of guests and rooms, date's, canellation)
                
            //     //check value was assind probplie 
            console.log(count);

            console.log(hotel['price']);
            //     // if(saveSearchObj.searchBarValue != null){
            //     //     savedSearchToString = JSON.stringify(saveSearchObj);
            //     //     //alert("not null")
            //     // }
                
            //     //save user input
            //     // if(savedSearchToString != "{}"){
            //     //     localStorage.setItem("searchJSONSaved", savedSearchToString);
            //     //     // console.log("Ture");
            //     //     // alert(savedSearchToString);
                    
            //     // }    
                
            //     // window.location.assign("./search.html");
            //     // });
    
    
        });
        
        //update count
        count++
    }
    count = 0;
}

for(let i =0;i < hotelViewDealClass.length;i++){
    
}


if (loadsavedData != "{}"){
    let searchDataObjectLoaded = JSON.parse(loadsavedData);

    //console.log(searchDataObjectLoaded);
    searchBarSearchPage.value = searchDataObjectLoaded.searchBarValue;
    startDateSearchPage.value = searchDataObjectLoaded.startDateValue;
    endDateSearchPage.value = searchDataObjectLoaded.endDateValue;
    numberOfRoomsSearchPage.value = searchDataObjectLoaded.roomNumberValue;
    numberOfGuestsSearchPage.value = searchDataObjectLoaded.guestsNumberValue;
    
}else{
    searchBarSearchPage.value = "";
    startDateSearchPage.value = "";
    endDateSearchPage.value = "";
    numberOfRoomsSearchPage.value = "";
    numberOfGuestsSearchPage.value = "";
}


