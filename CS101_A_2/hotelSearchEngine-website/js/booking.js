//get saved booking Details
let savedBookingDetailsJSONString = localStorage.getItem('hotelDealJSONSaved');
let savedBookingDetails = JSON.parse(savedBookingDetailsJSONString);

//getting HTML to use
let hotelNameClass =document.getElementsByClassName('hotel-name');
let starRatingId =document.getElementById('star-rating-id');
let favouritHeartId = document.getElementById('heart-button-id');
let hotelDisplayClass = document.getElementsByClassName('hotel-name-stars-info');
let hotelBookinDateId = document.getElementById('checkin-date-id');
let hotelLeavingDateId = document.getElementById('checkout-date-id');
let hotelTotalNightsofStay = document.getElementById('total-nigths-result-id');
let hotelTotalPriceDislplay = document.getElementById('hotel-total-price-display-id');
let hotelNamePriceBoxId = document.getElementById('hotel-name-for-price-id');
let hotelPricePerNightId = document.getElementById('hotel-price-for-price-id');
//payment booking form
let travelForWorkYesId = document.getElementById('travelling-yes');
let travelForWorkNoId = document.getElementById('travelling-no');
let firstNamePaymentForm = document.getElementById('fname');
let lastNamePaymentForm = document.getElementById('last-name');
let emailPaymentForm = document.getElementById('email');
let confirmEmailPaymentForm = document.getElementById('confirm-email');
let paymentAndBookingForm = document.getElementsByClassName('payment-form-booking');
let whoYouBookingFor = document.getElementById('main-guests');
let bookingForSomeoneElse = document.getElementById('someone-else');
let totalNightsAdded;


let currencySymbol = "&dollar;";


//console.log(hotelNameClass);
document.addEventListener('DOMContentLoaded', (ev)=>{
    priceCheckAndDatesCheck();
    addDataTo();
    yourDetails();
});




function addDataTo() {
    
    //console.log(savedBookingDetails);
    //console.log(savedBookingDetails.stars);
    hotelNameClass[0].innerHTML = savedBookingDetails.name;
    hotelDisplayClass[0].append("guests rating: " + savedBookingDetails.guestsRating);

    switch (savedBookingDetails.stars) {
        case 0:
            starRatingId.innerHTML = "";
            break;
        case 1:
            starRatingId.innerHTML = '<i class="fa-solid fa-star"></i>';
            break;
        case 2:
            starRatingId.innerHTML = '<i class="fa-solid fa-star"></i><i class="fa-solid fa-star"></i>';
            break;
        case 3:
            starRatingId.innerHTML = '<i class="fa-solid fa-star"></i><i class="fa-solid fa-star"></i><i class="fa-solid fa-star"></i>';
            break;
        case 4:
            starRatingId.innerHTML = '<i class="fa-solid fa-star"></i><i class="fa-solid fa-star"></i><i class="fa-solid fa-star"></i><i class="fa-solid fa-star"></i>';
            
            break;
        case 5:
            starRatingId.innerHTML = '<i class="fa-solid fa-star"></i><i class="fa-solid fa-star"></i><i class="fa-solid fa-star"></i><i class="fa-solid fa-star"></i><i class="fa-solid fa-star"></i>';
            break;
        default:
            break;
    }
}

function priceCheckAndDatesCheck(){
    

    let firstDay = new Date(savedBookingDetails.startDate);
    let lastDay =new Date(savedBookingDetails.endDate);
    let monthAdded = (firstDay.getMonth()+1);
    let lastDayMonthAdded = (lastDay.getMonth()+1);


    let firstDate = firstDay.getDate() + "/" +  monthAdded + "/" +  firstDay.getFullYear();
    let lastDate = lastDay.getDate() + "/" + lastDayMonthAdded + "/" + lastDay.getFullYear();


    console.log(savedBookingDetails.startDate)
    console.log(Math.floor((lastDay.getTime() - firstDay.getTime()) / (1000*60*60*24)));

    totalNightsAdded = Math.floor((lastDay.getTime() - firstDay.getTime()) / (1000*60*60*24));

    //console.log(totalNightsAdded);

    hotelBookinDateId.innerHTML = firstDate;
    hotelLeavingDateId.innerHTML = lastDate;
    hotelTotalNightsofStay.innerHTML = totalNightsAdded + " Nights";
    hotelTotalPriceDislplay.innerHTML = "total Price: "+ currencySymbol + savedBookingDetails.price * totalNightsAdded;

    hotelNamePriceBoxId.innerHTML = savedBookingDetails.name;
    hotelPricePerNightId.innerHTML = "price per Night: " + currencySymbol + savedBookingDetails.price;

}


function yourDetails() {    
    
    paymentAndBookingForm[0].addEventListener('submit',(event)=>{
        event.preventDefault();
        let booked={
            price: savedBookingDetails.price * totalNightsAdded,
            hotelNameBooked: savedBookingDetails.name,
            fristNameBooked: firstNamePaymentForm.value,
            lastNameBooked: lastNamePaymentForm.value,
            datesBookedCheckin: savedBookingDetails.startDate,
            datesBookedCheckout: savedBookingDetails.endDate
        }

        if(travelForWorkYesId.checked){
            console.log(travelForWorkYesId.checked,"yes");
        }else{
            console.log(travelForWorkNoId.checked,"no");
        }

        if(whoYouBookingFor){
            console.log('booked for you');
        }else{
            console.log('booked for someone else');
        }

        if(emailPaymentForm.value != "" && emailPaymentForm.value === confirmEmailPaymentForm.value && firstNamePaymentForm.value != "" && lastNamePaymentForm.value != ""){

            alert(booked.hotelNameBooked +
                " has been Booked for " +
                 booked.fristNameBooked +
                 " " +
                  booked.lastNameBooked +
                   " from " +
                    booked.datesBookedCheckin + 
                    " to " +
                     booked.datesBookedCheckout +
                      " at " +
                      "$" + booked.price);

            alert("THANK YOU FOR YOU'R BOOKING.");

        }else if(emailPaymentForm.value != confirmEmailPaymentForm.value){
            alert('please enter same email');
        }else{
            alert('please enter all field');
        }

        



    });

    

}

favouritHeartId.onclick = function(){    

    if(favouritHeartId.innerHTML === '<i class="fa-solid fa-heart"></i>' && savedBookingDetails.favourites){
        favouritHeartId.innerHTML = '<i class="fa-regular fa-heart"></i>';        
        savedBookingDetails.favourites = false;
    }else{
        favouritHeartId.innerHTML = '<i class="fa-solid fa-heart"></i>';
        savedBookingDetails.favourites = true;
    }
    console.log(savedBookingDetails.favourites);
}


document.addEventListener('submit',(event) =>{
    event.preventDefault();
    alert(event.target);
});