//This Script defines the functionality to create cubes.

$(function () {

   // var stats = initStats();

	//Define Scene
	var scene = new THREE.Scene();


	//<Define Camera>
    var camera = new THREE.PerspectiveCamera(70, window.innerWidth / window.innerHeight, 0.1, 1000);
    camera.position.x = -30;
    camera.position.y = 40;
    camera.position.z = 30;
    camera.lookAt(scene.position);
  	//</Define Camera>
  


//<plane>
        var planeGeometry = new THREE.PlaneGeometry(60,40,1,1);
        var planeMaterial =    new THREE.MeshLambertMaterial({color: 0xffffff});
        var plane = new THREE.Mesh(planeGeometry,planeMaterial);
        plane.receiveShadow  = true;

        // rotate and position the plane
        plane.rotation.x=-0.5*Math.PI;
        plane.position.x=0
        plane.position.y=0
        plane.position.z=0

        // add the plane to the scene
        scene.add(plane);


//</plane>


//<lights>
        var ambientLight = new THREE.AmbientLight(0x0c0c0c);
        scene.add(ambientLight);

        // add spotlight for the shadows
        var spotLight = new THREE.SpotLight( 0xffffff );
        spotLight.position.set( -40, 60, -10 );
        spotLight.castShadow = true;
        scene.add( spotLight );
//<lights>


//<renderer>
        var renderer = new THREE.WebGLRenderer();

        renderer.setClearColorHex(0xEEEEEE, 1.0);
        renderer.setSize(window.innerWidth, window.innerHeight);
        renderer.shadowMapEnabled = true;

//</renderer>


        render();

        function render() {

            // rotate the cubes around its axes
            scene.traverse(function(e) {
                if (e instanceof THREE.Mesh && e != plane ) {

                    e.rotation.x+=controls.rotationSpeed;
                    e.rotation.y+=controls.rotationSpeed;
                    e.rotation.z+=controls.rotationSpeed;
                }
            });

            // render using requestAnimationFrame
            requestAnimationFrame(render);
            renderer.render(scene, camera);
        }


















    });